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
    set<long long> number;
    int maxN = sqrt(N);
    for(int i = 1; i <= maxN; ++i) {
        if(N % i == 0) {
            number.insert(i);
            number.insert(N / i);
        }
    }
    for(auto x : number) {
        cout << x << endl;
    }
    return 0;
}