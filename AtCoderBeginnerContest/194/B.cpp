#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  int minA1 = 100001, minA2 = 100001, minB1 = 100001, minB2 = 100001;
  int minAPerson = 0, minBPerson = 0;
  for(int i = 0; i < N; ++i) {
    int A, B;
    cin >> A >> B;
    if(A < minA2) {
        if(A < minA1){
            minA2 = minA1;
            minA1 = A;
            minAPerson = i;
        }else{
            minA2 = A;
        }
    }
    if(B < minB2) {
      if(B < minB1) {
        minB2 = minB1;
        minB1 = B;
        minBPerson = i;
      } else {
        minB2 = B;
      }
    }
  }
  int ans;
  if(minAPerson == minBPerson)
    ans = min({minA1 + minB1, max(minA1, minB2), max(minA2, minB1)});
  else
    ans = max(minA1, minB1);
  cout << ans << endl;
  return 0;
}
