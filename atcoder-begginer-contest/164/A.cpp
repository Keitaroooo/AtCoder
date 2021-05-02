#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int S, W;
    cin >> S >> W;
    if (S <= W)
    {
        cout << "unsafe" << endl;
    }
    else
    {
        cout << "safe" << endl;
    }

    return 0;
}
