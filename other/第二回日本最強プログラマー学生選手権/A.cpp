#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  int min = double(Y) / double(X) * Z;
  if((Y * Z) % X == 0) min--;
  cout << min << endl;
  return 0;
}
