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
    int N, X, T;
    cin >> N >> X >> T;
    if(N%X == 0){
        cout << N / X * T << endl;
    }else{
        cout << (N / X + 1) * T << endl;
    }
    return 0;
}