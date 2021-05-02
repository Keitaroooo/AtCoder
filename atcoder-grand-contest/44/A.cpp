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
    int T;
    cin >> T;
    long long N, A, B, C, D;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> A >> B >> C >> D;
        vector<long long> dp(10 * N, N+100);
        dp[0] = 0;
        dp[1] = D;
        for(int i = 1; i <= N; i++)
        {
            dp[2 * i] = min(dp[2 * i], dp[i] + A);
            dp[2 * i - 1] = min(dp[2 * i - 1], dp[2 * i] + D);
            dp[2 * i + 1] = min(dp[2 * i + 1], dp[2 * i] + D);
            dp[3 * i] = min(dp[3 * i], dp[i] + B);
            dp[3 * i - 1] = min(dp[3 * i - 1], dp[3 * i] + D);
            dp[3 * i + 1] = min(dp[3 * i + 1], dp[3 * i] + D);
            dp[5 * i] = min(dp[5 * i], dp[i] + C);
            dp[5 * i - 1] = min(dp[5 * i - 1], dp[5 * i] + D);
            dp[5 * i + 1] = min(dp[5 * i + 1], dp[5 * i] + D);
            dp[i] = min(dp[i], dp[i - 1] + D);
            dp[i] = min(dp[i], dp[i + 1] + D);
        }
        cout << dp[N] << endl;
    }
    return 0;
}
