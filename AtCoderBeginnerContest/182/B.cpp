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
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int answerK = 2;
    int maxGCD = 0;
    for(int k = 2; k <= 1000; ++k) {
        int count = 0;
        for(int i = 0; i < N; ++i) {
            if(A[i] % k == 0) {
                count++;
            }
        }
        if(count > maxGCD){
            answerK = k;
            maxGCD = count;
        }
    }
    cout << answerK << endl;
    return 0;
}