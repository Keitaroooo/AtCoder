#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    T.pop_back();
    if(S == T)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    

    
    return 0;
}
