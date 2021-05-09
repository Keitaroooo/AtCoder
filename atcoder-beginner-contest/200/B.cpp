#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;
    for(int i = 0; i < k; ++i) {
        if(n % 200 == 0) {
            n /= 200;
        } else {
            n = n * 1000 + 200;
        }
    }
    cout << n << endl;
    return 0;
}
