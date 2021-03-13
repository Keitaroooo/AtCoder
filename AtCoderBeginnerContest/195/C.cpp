#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  long long N;
  cin >> N;
  if(N<=999){
    cout << "0" << endl;
    return 0;
  }
  long long numberOfDisits = log10(N);
  long long numberOfComma = numberOfDisits / 3;
  long long count = 0;
  numberOfDisits -= numberOfDisits % 3;
  count += (N - pow(10, numberOfDisits) + 1) * numberOfComma;
  numberOfComma--;
  while(numberOfComma) {
    count += (pow(10, numberOfDisits) - 1 - pow(10, numberOfDisits - 3) + 1) *
             numberOfComma;
    numberOfDisits -= 3;
    numberOfComma--;
  }
  cout << count << endl;
  return 0;
}
