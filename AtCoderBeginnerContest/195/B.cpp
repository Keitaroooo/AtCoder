#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int A, B, W;
  cin >> A >> B >> W;
  W *= 1000;
  int min, max;
  max = W / A;
  min = W / B;
  if(max * (B - A) < W % A)
    cout << "UNSATISFIABLE" << endl;
  else {
    if(W % B == 0) min--;
    cout << min + 1 << " " << max << endl;
  }
  return 0;
}
