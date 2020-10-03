#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MOD = 998244353;

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> S(N+1,0);
//     int L, R;
//     for(int i = 0; i < K; ++i){
//         cin >> L >> R;
//         for(int j = L; j <= R; ++j){
//             S[j] = 1;
//         }
//     }
//     vector<long long> dp(N + 1, 0);
//     dp[N] = 1;
//     for(int i = N - 1; i >= 1; --i){
//         int maxJ = N - i;
//         for(int j = 1; j <= maxJ; ++j){
//           if(S[j] == 1){
//               dp[i] += dp[i + j];
//               dp[i] %= MOD;
//           }
//         }
//     }
//     cout << dp[1] << endl;
//     return 0;
// }

int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> S(K);
    for(int i = 0; i < K; ++i) {
        int L, R;
        cin >> L >> R;
        S[i] = make_pair(L, R);
    }
    // マスiまで移動する方法の個数とマス(i+1)まで移動する方法の個数の差
    vector<long long> dp(N);
    dp[0] = 1;
    dp[1] = -1;
    for(int i = 1; i < N; ++i) {
        dp[i] += dp[i - 1];
        for(int j = 0; j < K; ++j) {
            int L, R;
            tie(L, R) = S[i];
            if(i + L < N) dp[i + L] += dp[i];
            if(i + R < N) dp[i + R] -= dp[i];
        }
    }
    long long ans = 0;
    for(int i = 0; i < N; ++i) {
        ans += dp[i];
        ans %= MOD;
    }
    cout << ans << endl;
}