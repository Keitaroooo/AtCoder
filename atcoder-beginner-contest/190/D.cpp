#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long N;
    cin >> N;
    long long count = 0;
    for(int i = 1; i <= N; ++i) {
        long long quotient = N / i;
        // Nを表現できなくなったら抜ける
        if(quotient - (i + 1) / 2 < 0) break;
        // 奇数の時
        if(i % 2 == 1) {
            if(N % i == 0) count += 2;
        }
        // 偶数の時
        else {
            if(quotient * i + i / 2 == N) count += 2;
        }
    }
    cout << count << endl;
    return 0;
}