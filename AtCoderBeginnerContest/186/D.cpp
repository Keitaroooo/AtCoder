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
    vector<long long> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long sumA = 0;
    long long sum = 0;
    for(int i = N - 2; i >= 0; --i) {
        sumA += A[i + 1];
        sum += sumA - (N - 1 - i) * A[i];
    }
    cout << sum << endl;
}