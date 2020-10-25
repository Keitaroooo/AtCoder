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
    long long before, after;
    long long stepHeightSum = 0;
    cin >> before;
    for(int i = 1; i < N; ++i) {
        cin >> after;
        if(before > after) {
            stepHeightSum += before - after;
        } else {
            before = after;
        }
    }
    cout << stepHeightSum << endl;
    return 0;
}