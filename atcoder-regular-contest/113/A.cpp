#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;
    long long count = 0;
    for(int i = 1; i <= K; ++i) {
        int bMax = K / i;
        for(int j = 1; j <= bMax; ++j) {
            count += K / i / j;
        }
    }
    cout << count << endl;
    return 0;
}