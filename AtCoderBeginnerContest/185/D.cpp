#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    if(M == 0) {
        cout << 1 << endl;
        return 0;
    } else if(N == M) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> A(M);
    for(int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int k = N;
    if(A[0] != 1) k = min(k, A[0] - 0 - 1);
    for(int i = 0; i < M - 1; ++i) {
        if(A[i + 1] != A[i] + 1) k = min(A[i + 1] - A[i] - 1, k);
    }
    if(A[M - 1] != N) k = min(k, N + 1 - A[M - 1] - 1);
    long long count = 0;
    count +=
        (A[0] - 0 - 1) % k == 0 ? (A[0] - 0 - 1) / k : (A[0] - 0 - 1) / k + 1;
    for(int i = 0; i < M - 1; ++i) {
        count += (A[i + 1] - A[i] - 1) % k == 0 ? (A[i + 1] - A[i] - 1) / k
                                                : (A[i + 1] - A[i] - 1) / k + 1;
    }
    count += (N + 1 - A[M - 1] - 1) % k == 0 ? (N + 1 - A[M - 1] - 1) / k
                                             : (N + 1 - A[M - 1] - 1) / k + 1;
    cout << count << endl;
}