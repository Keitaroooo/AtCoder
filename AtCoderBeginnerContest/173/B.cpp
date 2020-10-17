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
    vector<int> C(4, 0);
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        if (S == "AC")
        {
            C[0]++;
        }
        else if (S == "WA")
        {
            C[1]++;
        }
        else if (S == "TLE")
        {
            C[2]++;
        }
        else
        {
            C[3]++;
        }
    }
    cout << "AC x " << C[0] << endl;
    cout << "WA x " << C[1] << endl;
    cout << "TLE x " << C[2] << endl;
    cout << "RE x " << C[3] << endl;

    return 0;
    
}