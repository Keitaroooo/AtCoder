#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long N, K;
    cin >> N >> K;
    long sum = 0;
    const long MOD = 1000000007;
    for (int i = K; i <= N + 1; i++)
    {
        sum += i * (N + 1 - i) + 1;
        sum %= MOD;
    }
    cout << sum << endl;
    return 0;
}
