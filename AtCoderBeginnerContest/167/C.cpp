#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int INF = 100000000;

vector<int> IntegerToVerctor(int bit, int N)
{
    vector<int> S;
    for (int i = 0; i < N; ++i)
    {
        if (bit & (1 << i))
        {
            S.push_back(i);
        }
    }
    return S;
}

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int mincost = INF;
    int cost;
    bool flag;
    vector<int> sum(M);
    for (int bit = 0; bit < (1<<N); ++bit)
    {
        cost = 0;
        flag = 1;
        for (int j = 0; j < M; j++)
        {
            sum[j] = 0;
        }
        vector<int> S = IntegerToVerctor(bit, N);
        for (int i : S)
        {
            cost += C[i];
            for (int j = 0; j < M; j++)
            {
                sum[j] += A[i][j];
            }
        }
        for (int i = 0; i < M; i++)
        {
            if(sum[i] < X)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            mincost = min(cost, mincost);
        }

    }

    if (mincost == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mincost << endl;
    }
    
    return 0;
}


