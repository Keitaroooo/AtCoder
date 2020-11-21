#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
int c = 0;

void moveTime(vector<vector<int>> T, vector<bool> city, int before, int K,
              int timeCount, int N) {
    bool flag = false;
    for(int i = 0; i < N; ++i) {
        if(city[i]) {
            flag = true;
            vector<bool> copyCity = city;
            copyCity[i] = 0;
            timeCount += T[before][i + 1];
            moveTime(T, copyCity, i + 1, K, timeCount, N);
            timeCount -= T[before][i + 1];
        }
    }
    if(flag == false) {
        timeCount += T[before][0];
        if(timeCount == K) {
            c++;
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> T(N, vector<int>(N));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> T[i][j];
        }
    }
    vector<bool> city(N - 1, true);
    moveTime(T, city, 0, K, 0, N - 1);
    cout << c << endl;
    return 0;
}