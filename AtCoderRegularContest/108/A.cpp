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
    long long S, P;
    cin >> S >> P;
    int maxP = sqrt(P);
    for(int N = 1; N <= maxP; ++N){
        if(P % N == 0){
            long long M = P / N;
            if(N + M == S){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}