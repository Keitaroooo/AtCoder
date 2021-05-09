#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N+1),B(N+1,0);
    for (int i = 2; i <= N; i++)
    {
        cin >> A[i];
        B[A[i]]++;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << B[i] << endl;
    }
    
    return 0;
}
