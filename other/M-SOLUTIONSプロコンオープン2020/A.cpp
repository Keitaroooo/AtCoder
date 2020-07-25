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
    int X;
    cin >> X;
    for (int i = 0; i < 8; i++)
    {
        if (400 + 200 * i <= X && X <= 599 + 200 * i)
        {
            cout << 8 - i << endl;
        }
    }
    return 0;
}

