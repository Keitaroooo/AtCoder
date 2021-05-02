#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MAX = 1000;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> number(MAX + 1);
  for(int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    number[A]++;
  }
  for(int i = 0; i < M; ++i) {
    int B;
    cin >> B;
    number[B]++;
  }
  for(int i = 0; i <= MAX; ++i) {
    if(number[i] == 1) cout << i << " ";
  }
  cout << endl;
  return 0;
}
