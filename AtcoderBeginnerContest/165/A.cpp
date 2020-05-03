#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int K, A, B;
    cin >> K >> A >> B;
    for (int i = A; i <= B; i++)
    {
        if (i % K == 0)
        {
            cout << "OK" << endl;
            return 0;
        }
    }

    cout << "NG" << endl;
    return 0;
}
