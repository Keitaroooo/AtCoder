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
    vector<long long> remainder(200);
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        remainder[a % 200]++;
    }
    long long count = 0;
    for(int i = 0; i < 200; ++i) count += remainder[i] * (remainder[i] - 1) / 2;
    cout << count << endl;
    return 0;
}
