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
  vector<int> A(N);
  for(int i = 0; i < N; ++i) cin >> A[i];
  int min = pow(2, 30);
  for(int i = 0; i < 1 << (N - 1); ++i) {
    int xored = 0;
    int ored = A[0];
    for(int j = 1; j < N; ++j) {
      if(i & (1 << (j - 1))) {
        xored ^= ored;
        ored = 0;
      }
      ored |= A[j];
    }
    xored ^= ored;
    min = std::min(xored, min);
  }
  cout << min << endl;
  return 0;
}
