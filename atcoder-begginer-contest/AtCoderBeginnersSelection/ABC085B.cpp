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
    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }
    vector<int> b(1000);
    for (int i = 0;i < N; i++)
    {
        b[d[i]] = 1;
    }
    int sum = 0;
    for (int i = 1;i <= 100; i++)
    {
        sum += b[i];
    }
    cout << sum << endl;
    return 0;
}
