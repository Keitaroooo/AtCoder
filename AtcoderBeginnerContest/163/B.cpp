#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    // int A[100000];
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
        N -= A[i];
    }
    if(N < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << N << endl;
    }
    
    return 0;
}
