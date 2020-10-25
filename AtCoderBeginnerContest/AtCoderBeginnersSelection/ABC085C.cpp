#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,Y;
    cin >> N >> Y;
    for (int i = 0; i <= N; i++)
    {
        // if(10000*i > Y)
        // {
        //     break;
        // }
        for (int j = 0; j + i <= N;j++)
        {
            // if(10000*i + 1000*j > Y)
            // {
            //     break;
            // }
            if (10000*i+5000*j+1000*(N-i-j) == Y)
            {
                cout << i << " " << j << " " << N-i-j << endl;
                return 0;
            }
        }
    }
    
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
