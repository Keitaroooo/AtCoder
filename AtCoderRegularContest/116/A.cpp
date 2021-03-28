#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for(int i = 0; i < T; ++i) {
    long long N;
    cin >> N;
    string ans = "Same";
    if(N % 2 == 1) ans = "Odd";
    if(N % 4 == 0) ans = "Even";
    cout << ans << endl;
  }
  return 0;
}
