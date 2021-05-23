#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

const long long MOD = 998244353;

long long product(int number) {
    long long ans = 1;
    for(int i = 0; i < number; ++i) ans = ans * 2 % MOD;
    return ans;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    int n = h + w - 1;
    vector<vector<int>> number(n, vector<int>(3));
    for(int i = 0; i < h; ++i) {
        cin >> s[i];
        for(int j = 0; j < w; ++j) {
            if(s[i][j] == 'R') number[i + j][0]++;
            if(s[i][j] == 'B') number[i + j][1]++;
            if(s[i][j] == '.') number[i + j][2]++;
        }
    }
    int count = 0;
    for(int i = 0; i < n; ++i) {
        if(number[i][0] > 0 && number[i][1] > 0) {
            cout << 0 << endl;
            return 0;
        }
        if(number[i][0] == 0 && number[i][1] == 0) count++;
    }
    cout << product(count) % MOD << endl;
    return 0;
}
