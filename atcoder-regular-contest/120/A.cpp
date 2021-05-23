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
    vector<long long> a(n), max(n);
    cin >> a[0];
    max[0] = a[0];
    for(int i = 1; i < n; ++i) {
        cin >> a[i];
        max[i] = std::max(max[i - 1], a[i]);
    }
    vector<long long> update_max = max;
    long long f_a = 0;
    for(int i = 0; i < n - 1; ++i) {
        long long a_i = a[i] + update_max[i];
        f_a += a_i;
        cout << f_a << endl;
        long long difference = max[i + 1] - max[i];
        if(difference > 0) {
            a_i += difference;
            f_a += difference * (i + 1);
        }
        update_max[i + 1] = std::max(max[i + 1], a_i);
    }
    cout << f_a + a[n - 1] + update_max[n - 1] << endl;
    return 0;
}
