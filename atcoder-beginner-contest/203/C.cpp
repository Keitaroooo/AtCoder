#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long k;
    cin >> k;
    vector<pair<long long, long long>> ab(n);
    for(int i = 0; i < n; ++i) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.begin(), ab.end());
    for(int i = 0; i < n; ++i) {
        if(k < ab[i].first) {
            cout << k << endl;
            return 0;
        } else {
            k += ab[i].second;
        }
    }
    cout << k << endl;
    return 0;
}
