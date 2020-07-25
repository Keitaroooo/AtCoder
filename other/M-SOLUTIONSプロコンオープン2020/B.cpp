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
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int count = 0;
    while (A >= B)
    {
        B *= 2;
        count++;
    }
    while (B >= C)
    {
        C *= 2;
        count++;
    }
    if (count <= K)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
