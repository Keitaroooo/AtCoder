#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  string S;
  cin >> S;
  char first = S[0];
  S.erase(0, 1);
  S.push_back(first);
  cout << S << endl;
  return 0;
}
