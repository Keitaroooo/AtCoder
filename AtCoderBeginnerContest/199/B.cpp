#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MIN = 1;
const int MAX = 1000;

int main() {
  int N;
  cin >> N;
  int maxA=MIN, minB=MAX;
  for (int i = 0; i < N; ++i){
    int A;
    cin >> A;
    maxA = max(maxA, A);
  }
  for(int i = 0; i < N; ++i) {
      int B;
      cin >> B;
      minB = min(minB, B);
  }
  int number = max(0, minB - maxA + 1);
  cout << number << endl;
  return 0;
}
