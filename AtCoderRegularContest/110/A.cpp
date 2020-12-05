#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

long long _gcd(long long a, long long b) {
    if(b == 0) {
        return a;
    } else {
        return _gcd(b, a % b);
    }
}

int main() {
    int N;
    cin >> N;
    long long gcd;
    long long lcm = 1;
    for (int i = 2; i <= N; ++i){
        gcd = _gcd(i, lcm);
        lcm = lcm / gcd * i;
    }
    cout << lcm + 1 << endl;
    return 0;
}