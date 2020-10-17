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
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<>());
    int count = N;
    for (int i = 0; i < N - 1; i++){
        bool flag = false;
        for (int j = i + 1; j < N; j++){
            if(A[i] % A[j] == 0){
                flag = true;
                break;
            }
        }
        if(flag){
            count--;
        }
    }
    if(A[N - 1] == A[N - 2]){
        count--;
    }
    cout << count << endl;
}
