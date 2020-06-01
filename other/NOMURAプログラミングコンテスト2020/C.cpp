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
    vector<int> A(N+1);
    for (int i = 0; i <= N; i++){
        cin >> A[i];
    }
    if(A[0] >= 1){
        cout << -1 << endl;
        return 0;
    }
    long long sum = 0;
    sum += A[N];
    for (int i = N - 1; i >= 0; i--){
        sum += A[i];
        
    }
        return 0;
}

