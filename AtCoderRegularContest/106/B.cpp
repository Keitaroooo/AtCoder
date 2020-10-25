#define _USE_MATH_DEFINES
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
vector<bool> seen;
vector<int> point;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    point.push_back(v);
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v);  // 再帰的に探索
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> a(N + 1), b(N + 1);
    long long tmp;
    for(int i = 1; i <= N; ++i) {
        cin >> tmp;
        a[i] = tmp;
    }
    for(int i = 1; i <= N; ++i) {
        cin >> tmp;
        b[i] = tmp;
    }
    // グラフ入力受取
    Graph G(N+1);
    for(int i = 0; i < M; ++i) {
        int c, d;
        cin >> c >> d;
        G[c].push_back(d);
        G[d].push_back(c);
    }

    // 全頂点が訪問済みになるまで探索
    // int count = 0;
    seen.assign(N + 1, false);
    for(int v = 1; v <= N; ++v) {
        point.assign(0,0);
        if(seen[v]) continue;  // v が探索済みだったらスルー
        dfs(G, v);  // v が未探索なら v を始点とした DFS を行う
        long long sum1 = 0, sum2 = 0;
        for(auto i : point) {
            sum1 += a[i];
            sum2 += b[i];
        }
        if(sum1 != sum2) {
            cout << "No" << endl;
            return 0;
        }
        // ++count;
    }
    cout << "Yes" << endl;
    return 0;
}
