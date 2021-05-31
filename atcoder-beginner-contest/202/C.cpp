#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

const int SECRET_NUMBER_NUMBER = 4;

int main() {
    long long n;
    cin >> n;
    vector<int> b(n), c(n);
    vector<long long> a_number(n + 1), bc_number(n + 1);
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        a_number[a]++;
    }
    for(int i = 0; i < n; ++i) cin >> b[i];
    for(int i = 0; i < n; ++i) cin >> c[i];
    for(int i = 0; i < n; ++i) bc_number[b[c[i] - 1]]++;
    long long count = 0;
    for(int i = 1; i <= n; ++i) count += a_number[i] * bc_number[i];

    cout << count << endl;
    return 0;
}
