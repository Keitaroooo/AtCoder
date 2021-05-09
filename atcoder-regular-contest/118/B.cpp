#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;
    long long n, m;
    cin >> n >> m;
    vector<long long> a(k);
    vector<long long> b(k);
    vector<pair<long long, int>> difference(k);
    long long sum = 0;
    for(int i = 0; i < k; ++i) {
        cin >> a[i];
        a[i] *= m;
        b[i] = round((double)a[i] / n);
        sum += b[i];
        difference[i].first = b[i] * n - a[i];
        difference[i].second = i;
    }
    sort(difference.begin(), difference.end());
    if(sum < m) {
        m = m - sum;
        for(int i = 0; i < k - 1; ++i) {
            long long diff =
                (difference[i + 1].first - difference[i].first) / n;
            diff = min(m, diff);
            b[difference[i].second] += diff;
            m -= diff;
            if(m <= 0) break;
        }
        long long division = m / k;
        for(int i = 0; i < k; ++i) b[i] += division;
        long long remainder = m % k;
        for(int i = 0; i < remainder; ++i) b[difference[i].second]++;
    } else {
        m = sum - m;
        for(int i = k - 1; i > 0; --i) {
            long long diff =
                (difference[i].first - difference[i - 1].first) / n;
            diff = min(m, diff);
            b[difference[i].second] -= diff;
            m -= diff;
            if(m <= 0) break;
        }
        long long division = m / k;
        for(int i = 0; i < k; ++i) b[i] -= division;
        long long remainder = (k - 1) - (m % k);
        for(int i = k - 1; i > remainder; --i) b[difference[i].second]--;
    }
    for(auto x : b) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
