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
    string S, T;
    cin >> S >> T;
    int count = 0;
    for (int i = 0; i < S.length(); i++){
        if(S[i] !=T[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}