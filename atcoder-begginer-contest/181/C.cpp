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
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < N - 2; ++i) {
        for(int j = i + 1; j < N - 1; ++j) {
            for(int k = j + 1; k < N; ++k) {
                if((y[k] - y[j]) * (x[j] - x[i]) ==
                   (y[j] - y[i]) * (x[k] - x[j])) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}