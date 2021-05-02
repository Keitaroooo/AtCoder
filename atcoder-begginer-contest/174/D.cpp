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
    int N;
    cin >> N;
    vector<char> c(N);
    bool Rnumber = false, Wnumber = false;
    for (int i = 0; i < N; i++)
    {
        cin >> c[i];
        if (c[i] == 'R')
        {
            Rnumber = true;
        }
        else if (c[i] == 'W')
        {
            Wnumber = true;
        }
    }
    if (Rnumber == false || Wnumber == false)
    {
        cout << 0 << endl;
        return 0;
    }
    int count = 0;
    int k = N - 1;
    for (int i = 0; i < N; i++)
    {
        if (c[i] == 'W')
        {
            for (int j = k; j >= 0; j--)
            {
                if (c[j] == 'R')
                {
                    if (i >= j)
                    {
                        cout << count << endl;
                        return 0;
                    }
                    c[i] = 'R';
                    c[j] = 'W';
                    count++;
                    k--;
                    break;
                }
                k--;
            }
        }
    }
    return 0;
}