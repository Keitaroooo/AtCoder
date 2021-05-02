#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>


using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<double> A(N);
  cin >> A[0];
  for(int i = 1; i < N; i++) {
    cin >> A[i];
    if(A[i] > A[i - 1]) {
      int tmp = A[i];
      A[i] = A[i - 1];
      A[i - 1] = tmp;
    }
  }
  int max = A[0];
  for(int i = 0; i < K; i++) {
    if(A[0] <= max) {
      for(int j = 0; j < A.size(); j++) {
        A[j] /= 2.;
        A.push_back(A[j]);
      }

    } else {
      A.push_back(A[0] - max);
      A[0] = max;
    }
    sort(A.begin(), A.end());
  }

  cout << max << endl;
  return 0;
}
