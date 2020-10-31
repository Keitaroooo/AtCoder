#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MOD = 998244353;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    long long a = 0, b = 0, c = 0;
    a = (1 + A) * A / 2 % MOD;
    b = (1 + B) * B / 2 % MOD;
    c = (1 + C) * C / 2 % MOD;
    cout << a % MOD * b % MOD * c % MOD << endl;
    return 0;
}