#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const long long MOD = 1000000007;

long long pow(long long x, long long n) {
  long long ret = 1;
  while(n > 0) {
    if(n & 1) ret = ret * x % MOD;
    x = x * x % MOD;
    n >>= 1;
  }
  return ret;
}

int main() {
  long long N, P;
  cin >> N >> P;
  cout << (P - 1) * pow(P - 2, N - 1) % MOD << endl;
  return 0;
}

// int main() {
//   long long N, P;
//   cin >> N >> P;
//   if(N == 1) {
//     cout << P - 1 - 0 << endl;
//     return 0;
//   }
//   long long pNumber = pow(P - 1, N - 1) - pow(P - 1, N - 2);
//   if(pNumber < 0) pNumber += MOD;
//   pNumber = pNumber % MOD * (N - 2) % MOD;
//   pNumber = pNumber % MOD + pow(P - 1, N - 1) % MOD;
//   long long number = pow(P - 1, N) - pNumber % MOD;
//   if(number < 0) number += MOD;
//   cout << number % MOD << endl;
//   return 0;
// }
