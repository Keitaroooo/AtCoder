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
    int N;
    cin >> N;
    vector<int> t(N+1), x(N+1), y(N+1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> t[i] >> x[i] >> y[i];
    }
    for (int i = 1; i <= N; i++)
    {
        if(t[i] % 2 != (x[i] + y[i]) % 2)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            if (x[i] + y[i] - x[i - 1] - y[i - 1] > t[i] - t[0])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        
    }
    
    cout << "Yes" << endl;
    return 0;
}
