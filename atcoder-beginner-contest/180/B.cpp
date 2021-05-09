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
    long long manhattan = 0, euclidean = 0, chebyshev = -100000;
    long long x;
    for(int i = 0; i < N; ++i) {
        cin >> x;
        x = abs(x);
        manhattan += x;
        euclidean += x * x;
        chebyshev = max(chebyshev, x);
    }
    cout << manhattan << endl;
    cout << fixed << setprecision(15) << sqrt(euclidean) << endl;
    cout << chebyshev << endl;
}