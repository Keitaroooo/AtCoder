#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    for(int i = 0; i < 3; i++) {
        if(S[i] == 'R')
        count++;
    }
    if(count == 2 && S[1] != 'R') {
        count--;
    }
    cout << count << endl;
    return 0;
}