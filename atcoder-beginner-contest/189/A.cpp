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
    if(S[0] == S[1] && S[1] == S[2]) cout << "Won" << endl;
    else
        cout << "Lost" << endl;
    return 0;
}