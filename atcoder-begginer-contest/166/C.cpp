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
    int N, M;
    cin >> N >> M;

    vector<int> H(N+1);
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
    }

    vector<int> A(M+1), B(M+1);
    for (int i = 1; i <= M; i++)
    {
        cin >> A[i] >> B[i];
    }
    
    set<int> notgood;
    set<int> c;
    for (int i = 1; i <= M; i++)
    {
        if(H[A[i]] > H[B[i]])
        {
            swap(A[i], B[i]);
        }
        notgood.insert(A[i]);
        if (H[A[i]] == H[B[i]])
        {
            notgood.insert(B[i]);
        }
    }
    cout << N - notgood.size() << endl;
    return 0;
}
