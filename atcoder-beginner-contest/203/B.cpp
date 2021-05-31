#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; ++j) {
            sum += i * 100 + j;
        }
    }
    cout << sum << endl;
    return 0;
}
