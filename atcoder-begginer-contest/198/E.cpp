#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
void dfs(const Graph& G, vector<bool>& seen, int v, vector<int>& A,
         int& maxBenefit, int minCost) {
    seen[v] = true;  // v を訪問済にする
    // v から行ける各頂点 next_v について
    for(auto next_v : G[v]) {
        maxBenefit = max(maxBenefit, A[next_v] - minCost);
        if(seen[next_v]) continue;  // next_v が探索済だったらスルー

        dfs(G, seen, next_v, A, maxBenefit, minCost);  // 再帰的に探索
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> a(N + 1);
    vector<int> A(N + 1);
    for(int i = 1; i <= N; ++i) {
        cin >> A[i];
        a[i].first = A[i];
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int X, Y;
    Graph G(N + 1);
    for(int i = 0; i < M; ++i) {
        cin >> X >> Y;
        G[X].push_back(Y);
    }
    vector<bool> seen(N + 1, false);
    int maxBenefit = -1000000001;
    for(int i = 1; i <= N; ++i) {
        int minCost = a[i].first;
        dfs(G, seen, a[i].second, A, maxBenefit, minCost);
    }
    cout << maxBenefit << endl;

    return 0;
}