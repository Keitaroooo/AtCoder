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
    long long D;
    cin >> N >> D;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        long long X, Y;
        cin >> X >> Y;
        if (X * X + Y * Y <= D*D)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}