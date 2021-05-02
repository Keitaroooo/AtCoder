#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = 4;
  A = A + B;
  if(A >= 15 && B >= 8)
    ans = 1;
  else if(A >= 10 && B >= 3)
    ans = 2;
  else if(A >= 3)
    ans = 3;
  cout << ans << endl;
  return 0;
}
