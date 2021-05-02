#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    int minNumber = 100;
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            cin >> A[i][j];
            if(A[i][j] < minNumber) minNumber = A[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < H; ++i) {
        for(int j = 0; j < W; ++j) {
            count += A[i][j] - minNumber;
        }
    }
    cout << count << endl;
    return 0;
}