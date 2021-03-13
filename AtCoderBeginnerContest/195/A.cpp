#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int M, H;
  cin >> M >> H;
  if(H % M == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
