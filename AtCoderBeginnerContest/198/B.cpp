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
  if(S == "0") {
    cout << "Yes" << endl;
    return 0;
  }
  while(true) {
    if(S[S.size() - 1] == '0')
      S.pop_back();
    else
      break;
  }
  string reverseS = S;
  reverse(reverseS.begin(), reverseS.end());
  if(S == reverseS)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
