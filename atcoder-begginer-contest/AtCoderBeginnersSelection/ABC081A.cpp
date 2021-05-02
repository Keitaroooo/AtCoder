#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0;i < s.length(); i++)
    {
        if(s[i] == '1')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
