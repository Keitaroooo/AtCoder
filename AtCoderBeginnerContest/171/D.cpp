#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> X(100000,0);
    long long sum = 0;
    for (int i = 0; i < N; i++){
        int A;
        cin >> A;
        sum += A;
        X[A]++;
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int B, C;
        cin >> B >> C;
        sum += -(B * X[B]) + (C * X[B]);
        X[C] += X[B];
        X[B] = 0;
        cout << sum << endl;
    }
    return 0;
}
