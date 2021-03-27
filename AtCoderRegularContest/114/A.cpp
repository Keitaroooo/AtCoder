#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

const vector<int> PRIME = {2,  3,  5,  7,  11, 13, 17, 19,
                           23, 29, 31, 37, 41, 43, 47};
const int PRIME_SIZE = PRIME.size();

vector<int> integerToVector(int bit, int m) {
  vector<int> S;
  for(int i = 0; i < m; ++i) {
    if(bit & (1 << i)) {
      S.push_back(i);
    }
  }
  return S;
}

// 最大公約数を求める
long long caliculateGcd(long long a, long long b) {
  if(b == 0) {
    return a;
  } else {
    return caliculateGcd(b, a % b);
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> X(N);
  for(int i = 0; i < N; ++i) cin >> X[i];
  long long min = 1;
  for(int x : PRIME) min *= x;
  for(int i = 1; i < (1 << PRIME_SIZE); ++i) {
    vector<int> binary = integerToVector(i, PRIME_SIZE);
    long long subset = 1;
    for(int x : binary) subset *= PRIME[x];
    bool flag = false;
    for(int j = 0; j < N; ++j) {
      if(caliculateGcd(subset, X[j]) == 1) {
        flag = true;
        break;
      }
    }
    if(flag == false) min = std::min(min,subset);
  }
  cout << min << endl;
}

// int main() {
//   int N;
//   cin >> N;
//   vector<int> X(N);
//   for(int i = 0; i < N; ++i) cin >> X[i];
//   int min = caliculateGcd(X[0], X[1]);
//   if(min == 1) {
//     int a = 2;
//     while(true) {
//       if(X[0] % a == 0) {
//         min *= a;
//         break;
//       }
//       a++;
//     }
//     a = 2;
//     while(true) {
//       if(X[1] % a == 0) {
//         min *= a;
//         break;
//       }
//       a++;
//     }
//   }
//   for(int i = 1; i < N; ++i) {
//     int gcd = caliculateGcd(min, X[i]);
//     if(gcd == 1) min *= X[i];
//   }
//   cout << min << endl;
//   return 0;
// }

// int main() {
//   int N;
//   cin >> N;
//   vector<int> X(N);
//   for(int i = 0; i < N; ++i) cin >> X[i];

//   int min = 2;
//   for(;; ++min) {
//     int i = 0;
//     for(; i < N; ++i) {
//       int gcd = caliculateGcd(X[i], min);
//       if(gcd == 1) break;
//     }
//     if(i == N) break;
//   }
//   cout << min << endl;
//   return 0;
// }
