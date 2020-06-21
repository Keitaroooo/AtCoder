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
    long long A, V, B, W, T;
    cin >> A >> V >> B >> W >> T;
    long long distance = abs(A - B);
    if(W >= V){
        cout << "NO" << endl;
        return 0;
    }
    long long ddistance = V - W;
    for (int i = 1; i <= T; i++)
    {
        distance -= ddistance;
        if (distance <= 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
    }
