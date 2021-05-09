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
    int K;
    cin >> K;
    if (K % 2 == 0 || K % 5 == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int count = 1;
    long long seven = 7;
    while (1)
    {
        seven = seven % K;
        if (seven == 0)
        {
            cout << count << endl;
            return 0;
        }
        seven = seven * 10 + 7;
        count++;
    }

    cout << count << endl;
    return 0;
}