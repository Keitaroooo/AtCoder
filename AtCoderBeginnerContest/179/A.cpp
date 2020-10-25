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
    if(S[S.size() - 1] == 's'){
        cout << S << "es" << endl;
    }else{
        cout << S << "s" << endl;
    }
    return 0;
}