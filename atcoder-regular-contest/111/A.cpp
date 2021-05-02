#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// a^n mod を計算する
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        // a = a^(2^次の桁数)
        a = a * a % mod;
        // 次の桁を調べる
        n >>= 1;
    }
    return res;
}

int main() {
    long long N;
    long long M;
    cin >> N >> M;
    cout << modpow(10,N,M*M) / M % M << endl;
    return 0;
}