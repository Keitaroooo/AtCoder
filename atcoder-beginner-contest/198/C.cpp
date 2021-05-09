#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  long long R, X, Y;
  cin >> R >> X >> Y;
  long long distance2 = X * X + Y * Y;
  long long distance = sqrt(distance2);
  long long R2 = R * R;
  long long min;
  if(distance2 == 0)
    min = 0;
  else {
    if(R2 > distance2)
      min = 2;
    else if((distance*distance) == distance2 && distance % R == 0)
      min = distance / R;
    else
      min = sqrt(distance2) / R + 1;
  }
  cout << min << endl;
  return 0;
}
