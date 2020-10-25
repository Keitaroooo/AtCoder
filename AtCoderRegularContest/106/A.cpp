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
    long long N;
    cin >> N;
    const long long maxA =
        log10(N) / log10(3) +
        1;  //切り捨てられることを考えて+1する、最大10^18だからオーバーフローはしないはず
    const long long maxB = log10(N) / log10(5) + 1;
    long long powA = 1, powB = 1;
    for(int a = 1; a <= maxA; ++a) {
        powA *= 3;
        powB = 1;
        // cout << powA << endl;
        for(int b = 1; b <= maxB; ++b) {
            powB *= 5;
            // cout << powB << endl;
            if(N - powB == powA) {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}