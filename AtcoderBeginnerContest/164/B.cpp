#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    while(true)
    {
        C -= B;
        if(C <= 0)
        {
            cout << "Yes" << endl;
            break;
        }
        A -= D;
        if (A <= 0)
        {
            cout << "No" << endl;
            break;
        }
    }

    return 0;
}
