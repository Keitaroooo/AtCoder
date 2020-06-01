#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
const unsigned long long INF = 1000000000000000000;

int main()
{
    int N;
    cin >> N;
    vector<unsigned long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if(A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    unsigned long long sum = 1;
    for (int i = 0; i < N; i++)
    {
        if(A[i] > INF/sum){
            cout << -1 << endl;
            return 0;
        }
        sum *= A[i];
    }

    cout << sum << endl;
    return 0;
}
