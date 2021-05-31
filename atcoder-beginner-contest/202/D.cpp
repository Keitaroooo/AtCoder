#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    long long k;
    cin >> a >> b >> k;
    vector<vector<long long>> dp(a + 1, vector<long long>(b + 1));
    dp[0][0] = 1;
    for(int i = 0; i <= a; ++i) {
        for(int j = 0; j <= b; ++j) {
            if(i > 0) {
                dp[i][j] += dp[i - 1][j];
            }
            if(j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }
    while(a > 0 and b > 0){
        if(k <= dp[a-1][b]){
            cout << 'a';
            a--;
        }else{
            k -= dp[a - 1][b];
            cout << 'b';
            b--;
        }
    }
    cout << string(a, 'a');
    cout << string(b, 'b');
    cout << endl;
    return 0;
}
