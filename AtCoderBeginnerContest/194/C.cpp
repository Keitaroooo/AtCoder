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
  vector<long long> A(N);
  long long sumA = 0, sumASquare = 0;

  for(int i = 0; i < N; ++i) {
    cin >> A[i];
    sumA += A[i];
    sumASquare += A[i] * A[i] * (N - 1);
  }
  for(int i = 0; i < N - 1; ++i) {
    sumA -= A[i];
    sumASquare += -2 * A[i] * sumA;
  }
  cout << sumASquare << endl;
  return 0;
}
