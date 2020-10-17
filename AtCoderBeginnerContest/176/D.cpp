#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int Ch, Cw;
    cin >> Ch >> Cw;
    Ch += 2;
    Cw += 2;
    int Dh, Dw;
    cin >> Dh >> Dw;
    Dh += 2;
    Dw += 2;
    vector<vector<char>> S(H + 4, vector<char>(W + 4, '#'));
    for(int i = 2; i < H + 2; ++i) {
        for(int j = 2; j < W + 2; ++j) {
            cin >> S[i][j];
        }
    }
    // dp[i][j] 魔法をi回使ったときに到達可能な座標のうちのj番目の座標
    vector<vector<vector<int>>> dp((H+2)*(W+2) + 10,
                                   vector<vector<int>>(0, vector<int>(2)));
    vector<vector<vector<bool>>> check(
        (H + 2) * (W + 2) + 10,
        vector<vector<bool>>(H + 4, vector<bool>(W + 4, false)));
    dp[0].emplace_back(vector<int>{Ch, Cw});
    check[0][Ch][Cw] = true;

    for(int i = 0; i < H*W; ++i) {
        for(int j = 0; j < dp[i].size(); ++j) {
            // ゴールに到達できたかチェック
            if(dp[i][j][0] == Dh && dp[i][j][1] == Dw) {
                cout << i << endl;
                return 0;
            }
            //移動Aで移動できるマスを調べる
            if(!check[i][dp[i][j][0] - 1][dp[i][j][1]] &&
               S[dp[i][j][0] - 1][dp[i][j][1]] == '.') {
                dp[i].emplace_back(vector<int>{dp[i][j][0] - 1, dp[i][j][1]});
                check[i][dp[i][j][0] - 1][dp[i][j][1]] = true;
            }
            if(!check[i][dp[i][j][0]][dp[i][j][1] - 1] &&
               S[dp[i][j][0]][dp[i][j][1] - 1] == '.') {
                dp[i].emplace_back(vector<int>{dp[i][j][0], dp[i][j][1] - 1});
                check[i][dp[i][j][0]][dp[i][j][1] - 1] = true;
            }
            if(!check[i][dp[i][j][0] + 1][dp[i][j][1]] &&
               S[dp[i][j][0] + 1][dp[i][j][1]] == '.') {
                dp[i].emplace_back(vector<int>{dp[i][j][0] + 1, dp[i][j][1]});
                check[i][dp[i][j][0] + 1][dp[i][j][1]] = true;
            }
            if(!check[i][dp[i][j][0]][dp[i][j][1] + 1] &&
               S[dp[i][j][0]][dp[i][j][1] + 1] == '.') {
                dp[i].emplace_back(vector<int>{dp[i][j][0], dp[i][j][1] + 1});
                check[i][dp[i][j][0]][dp[i][j][1] + 1] = true;
            }

            //移動Bで移動できるマスを調べる
            for(int k = -2; k <= 2; k += 4) {
                for(int l = -2; l <= 2; ++l) {
                    if(!check[i+1][dp[i][j][0] + k][dp[i][j][1] + l] &&
                       S[dp[i][j][0] + k][dp[i][j][1] + l] == '.') {
                        dp[i + 1].emplace_back(
                            vector<int>{dp[i][j][0] + k, dp[i][j][1] + l});
                        check[i+1][dp[i][j][0] + k][dp[i][j][1] + l] = true;
                    }
                }
            }
            for(int l = -2; l <= 2; l += 4) {
                for(int k = -1; k <= 1; ++k) {
                    if(!check[i+1][dp[i][j][0] + k][dp[i][j][1] + l] &&
                       S[dp[i][j][0] + k][dp[i][j][1] + l] == '.') {
                        dp[i + 1].emplace_back(
                            vector<int>{dp[i][j][0] + k, dp[i][j][1] + l});
                        check[i+1][dp[i][j][0] + k][dp[i][j][1] + l] = true;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}