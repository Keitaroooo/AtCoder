#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  double ans = 0;
  for(int i = 1; i < N; ++i) ans += double(N) / double(N - i);
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}

// const int INF = 100000001;

// int main() {
//   int N;
//   cin >> N;
//   double ans = 0;
//   double probability = 1;
//   double sum = 0;
//   for(int i = 1; i < N; ++i) {
//     probability *= double(i) / double(N);
//     sum += double(i) / double(N);
//   }
//   for(int i = N; i < INF; ++i) {
//     ans += probability * (i - 1);
//     probability *= sum-(i-2)/double(N);
//   }
//   cout << fixed << setprecision(10) << ans << endl;
//   return 0;
// }
