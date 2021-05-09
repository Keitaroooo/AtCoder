#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

vector<int> integerToVector(int bit, int m) {
    vector<int> binary;
    for(int i = 0; i < m; ++i) {
        if(bit & (1 << i)) {
            binary.push_back(1);
        } else {
            binary.push_back(0);
        }
    }
    return binary;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for(int i = 0; i < M; ++i) {
        cin >> A[i] >> B[i];
    }
    int K;
    cin >> K;
    vector<int> C(K), D(K);
    for(int i = 0; i < K; ++i) {
        cin >> C[i] >> D[i];
    }
    vector<int> judge(N + 1);
    int size = pow(2, K);
    int maxNumber = 0;
    for(int i = 0; i < size; ++i) {
        // 初期化
        int number = 0;
        for(int j = 0; j < M; ++j) {
            judge[A[j]] = 0;
            judge[B[j]] = 0;
        }
        vector<int> binary = integerToVector(i, K);
        for(int j = 0; j < K; ++j) {
            if(binary[j] == 0)
                judge[C[j]] = 1;
            else
                judge[D[j]] = 1;
        }
        for(int j = 0; j < M; ++j) {
            if(judge[A[j]] >= 1 && judge[B[j]] >= 1) number++;
        }
        maxNumber = max(maxNumber, number);
    }
    cout << maxNumber << endl;
    return 0;
}