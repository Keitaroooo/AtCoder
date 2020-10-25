#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long X;
    cin >> X;
    long long deposit = 100;
    int count = 0;
    while(true)
    {
        deposit *= 1.01;
        count++;
        if(deposit >= X)
        {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
