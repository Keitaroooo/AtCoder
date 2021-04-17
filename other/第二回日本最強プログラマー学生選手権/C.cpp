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
  int max = B - A;
  while(max > 1) {
    if(A % max == 0) {
      if(A + max <= B) break;
    } else{
      if(A + (max - A % max) + max <= B) break;
    }
    max--;
  }
  cout << max << endl;
  return 0;
}
