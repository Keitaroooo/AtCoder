#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> S(H);
  for(int i = 0; i < H; ++i) {
    cin >> S[i];
  }
  int count = 0;
  for(int j = Y - 1; j >= 1; --j) {
    if(S[X - 1][j - 1] == '#') break;
    count++;
  }
  for(int j = Y + 1; j <= W; ++j) {
    if(S[X - 1][j - 1] == '#') break;
    count++;
  }
  for(int i = X - 1; i >= 1; --i) {
    if(S[i - 1][Y - 1] == '#') break;
    count++;
  }
  for(int i = X + 1; i <= H; ++i) {
    if(S[i - 1][Y - 1] == '#') break;
    count++;
  }
  if(S[X - 1][Y - 1] == '.') count++;
  cout << count << endl;
  return 0;
}
