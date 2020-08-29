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
    int D, T, S;
    cin >> D >> T >> S;
    if(D <= T *  S){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}