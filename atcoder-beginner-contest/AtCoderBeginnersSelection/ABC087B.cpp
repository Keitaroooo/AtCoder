#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int count = 0;
    for (int i = 0;i <= A; i++)
    {
        if(500*i > X)
        {
            break;
        }
        for (int j = 0; j <= B; j++)
        {
            if(500*i + 100*j > X)
            {
                break;
            }
            for (int k = 0; k <= C; k++)
            {
                if(500*i + 100*j + 50 *k == X)
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
