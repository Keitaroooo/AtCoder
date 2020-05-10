#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    unsigned long c;
    int length = S.length();
    for (int i = 0; i <= length-4; i++)
    {
        for (int j = 4; j <= length-i; j++)
        {
            istringstream(S.substr(i, j)) >> c;
            if(c % 2019 == 0)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
