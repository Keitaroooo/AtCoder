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
  int N;
  cin >> N;
  vector<long long> A(N);
  long long ans = 0;
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
    ans = ans + A[i] * A[i] % MOD;
  }
  sort(A.begin(), A.end());
  long long sum = 0;
  for(int i = 1; i < N; ++i) {
    sum = sum * 2 % MOD;
    sum = sum + A[i - 1] % MOD;
    ans = ans + A[i] * sum % MOD;
  }
  cout << ans % MOD << endl;
  return 0;
}
