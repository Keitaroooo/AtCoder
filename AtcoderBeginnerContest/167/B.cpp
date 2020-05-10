#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int A,B,C, K;
    cin >> A >> B >> C >> K;
    int count = 0;
    int sum = 0;
    while(true)
    {
        for (int i = 0; i < A; i++)
        {
            sum++;
            count++;
            if(count == K)
            {
                cout << sum << endl;
                return 0;
            }
        }
        for (int i = 0; i < B; i++)
        {
            count++;
            if (count == K)
            {
                cout << sum << endl;
                return 0;
            }
        }
        for (int i = 0; i < C; i++)
        {
            sum--;
            count++;
            if (count == K)
            {
                cout << sum << endl;
                return 0;
            }
        }
    }
}
