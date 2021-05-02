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
    int size = S.size();
    for(int i = 0; i < size; ++i) {
        if(i % 2 == 0) {
            if(S[i] < 'a' || S[i] > 'z') {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if(S[i] < 'A' || S[i] > 'Z') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}