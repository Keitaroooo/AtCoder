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
    int N, K;
    cin >> N >> K;
    K = abs(K);
    long long count = 0;
    long long countAB, countCD;
    for(int i = K + 2; i <= 2 * N; ++i) {
        if(i > N + 1) {
            countAB = N - (i - N) + 1;
        } else {
            countAB = i - 1;
        }
        if(i - K > N + 1) {
            countCD = N - (i - K - N) + 1;
        } else {
            countCD = i - K - 1;
        }
        count += countAB * countCD;
    }
    cout << count << endl;
}
