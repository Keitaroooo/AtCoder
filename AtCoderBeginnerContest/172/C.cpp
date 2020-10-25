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
    long long N, M;
    long long K;
    cin >> N >> M >> K;
    vector<long long> A(N), B(M);
    for (int i = 0; i < N;i++){
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    vector<vector<long long>> dp(N+M, vector<long long>(3,0));
    long long count = 0;
    if(A[0] <= B[0]){
        dp[1][0] = A[0];
        dp[1][1] = 1;
    }else{
        dp[1][0] = B[0];
        dp[1][2] = 1;
    }
    for (int i = 1; i < N + M -1){
        if(A[dp[i][1] <= B[dp[i][2]]){
            if(dp[i][1] == dp[i-1][1]){
                if (dp[i][0] + A[dp[i][1]] <= dp[i - 1][0] + A[dp[i - 1][1]] + A[dp[i-1][1]+1]){
                    dp[i + 1][0] = dp[i][0] + A[dp[i][1]];
                    dp[i + 1][1] = dp[i][1] + 1;
                }else{
                    dp[i][0] = dp[i - 1][0] + A[dp[i - 1][1]];
                    dp[i][1]--;
                    dp[i + 1][0] = dp[i][0] + A[dp[i][1]];
                    dp[i + 1][1] = dp[i][1] + 1;
                }
            }
            if (( && (dp[i][0] + A[dp[i][1]] <= dp[i - 1][0] + B[dp[i - 1][2]]))
            {
                dp[i + 1][0] =
            }
            else if (, dp[i - 1][0] + B[dp[i - 1][2]])
            {
            }
        }else{

        }
        if(K < dp[i+1][0]){
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}