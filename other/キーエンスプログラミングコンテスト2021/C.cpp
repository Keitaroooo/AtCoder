#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const long long MOD = 998244353;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> grid(H, string(W, ' '));
    for(int i = 0; i < K; ++i) {
        int h, w;
        char c;
        cin >> h >> w >> c;
        grid[h - 1][w - 1] = c;
    }
    vector<vector<long long>> dp(H, vector<long long>(W));
    int size = H * W - K;
    dp[0][0] = 1;
    // 最初のマスに移動する場合（移動する必要がない）、それぞれの空白マスには3通りの書き込み方がある
    for(int i = 0; i < size; ++i) {
        dp[0][0] = dp[0][0] % MOD * 3 % MOD;
    }
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            long long x = dp[i][j] % MOD;
            // 経路途中に空白マスがある場合、書き込める文字は3から2になる
            if(grid[i][j] == ' ') {
                x /= 3;
                x = x * 2;
            }
            if(i + 1 < H && grid[i][j] != 'R') {
                dp[i + 1][j] = dp[i + 1][j] % MOD + x % MOD;
                dp[i + 1][j] %= MOD;
            }
            if(j + 1 < W && grid[i][j] != 'D') {
                dp[i][j + 1] = dp[i][j + 1] % MOD + x % MOD;
                dp[i][j + 1] %= MOD;
            }
        }
    }
    cout << dp[H - 1][W - 1] << endl;
    return 0;
}