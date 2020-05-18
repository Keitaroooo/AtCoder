#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <sstream>
#include <queue>

using namespace std;

const int INF = 1001001001;

int main()
{
    int N, M ;
    cin >> N >> M;
    vector<vector<int>> to(N);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    queue<int> q;
    vector<int> dist(N, INF);
    vector<int> pre(N, -1);
    q.push(0);
    dist[0] = 0;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : to[v])
        {
            if(dist[u] == INF)
            {
                dist[u] = dist[v] + 1;
                pre[u] = v;
                q.push(u);
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < N; i++)
    {
        cout << pre[i] + 1 << endl;
    }
    return 0;
}
