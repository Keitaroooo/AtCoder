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
    vector<int> P(N), C(N);
    for(int i = 0; i < N; i++) {
        cin >> P[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }
    vector<vector<int>> score(N, <vector<int>>(0));
    int i - 0,j = 0;
    while(1) {
        while(1) {
            if(j == 0) {
                break;
            }
            score[i].push_back(C[P[j]]);
            j = P[j];
            P[j] = 0;
        }
        i++;
    }
    long long max = 10000000000000;
    long long sum = 0;
    for(int i = 0; i < score.size(); i++) {
        for(int j = 0; j < score[i].size(); j++) {
            long long tmp = sum;
            sum += score[i][j];
        }
    }
    return 0;
}