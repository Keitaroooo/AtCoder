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
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N, 0);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < K; i++){
        for (int j = 0; j < N; j++){
            for (int k = -A[j]; k <= A[j]; k++){
                if(0 <= (j+k) && (j+k) < N){
                    B[j + k]++;
                }
            }
        }
        for (int j = 0; j < N; j++){
            A[j] = B[j];
            B[j] = 0;
        }
    }
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

