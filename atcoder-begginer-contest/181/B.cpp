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
    long long count = 0;
    long long A, B;
    for(int i = 0; i < N; ++i) {
        cin >> A >> B;
        count += (A + B) * (B - A + 1) / 2;
    }
    cout << count << endl;
    return 0;
}