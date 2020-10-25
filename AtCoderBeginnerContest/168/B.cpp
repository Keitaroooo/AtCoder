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
    int K;
    string S;
    cin >> K;
    cin >> S;
    if(S.length() <= K)
    {
        cout << S << endl;
    }
    else
    {
        cout << S.substr(0, K) << "..." << endl;
    }
    return 0;
}
