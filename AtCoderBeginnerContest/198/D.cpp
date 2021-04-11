#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int number(const string& key, const string& permutation) {
  int result = 0;
  for(int i = 0; i < key.size(); ++i) {
    result = result * 10 + permutation.find(key[i]);
  }
  return result;
}

string digits(const string& key, const string& permutation) {
  string result;
  for(int i = 0; i < key.size(); ++i) {
    result += (permutation.find(key[i]) + '0');
  }
  return result;
}

int main() {
  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;
  set<char> pset;
  pset.insert(S1.begin(), S1.end());
  pset.insert(S2.begin(), S2.end());
  pset.insert(S3.begin(), S3.end());
  if(pset.size() > 10) {
    cout << "UNSOLVABLE" << endl;
    return 0;
  }
  if(pset.size() <= 9) pset.insert(' ');
  string unique(pset.begin(), pset.end());
  string permutation = unique;
  while(permutation.size() < 10) permutation += ' ';
  do {
    int nS1 = number(S1, permutation);
    int nS2 = number(S2, permutation);
    int nS3 = number(S3, permutation);
    if(nS1 + nS2 == nS3) {
      if(digits(S1, permutation)[0] != '0' &&
         digits(S2, permutation)[0] != '0' &&
         digits(S3, permutation)[0] != '0') {
        cout << digits(S1, permutation) << endl;
        cout << digits(S2, permutation) << endl;
        cout << digits(S3, permutation) << endl;
        return 0;
      }
    }
  } while(next_permutation(permutation.begin(), permutation.end()));
  cout << "UNSOLVABLE" << endl;
  return 0;
}
