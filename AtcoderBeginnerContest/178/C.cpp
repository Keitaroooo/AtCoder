#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    long long count = 1, count1 = 1, count2 = 1;
    for(int i = 0; i < N; ++i){
        count = 10 * count % MOD;
        count1 = 9 * count1 % MOD;
        count2 = 8 * count2 % MOD;
    }
    count1 = 2 * count1 % MOD;
    long long ans = count - (count1 - count2);
    if(ans < 0){
        ans += MOD;
    } 
    cout << ans << endl;
    return 0;
}