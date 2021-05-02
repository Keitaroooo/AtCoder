#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

const int COLOR_NUMBER = 3;

long long dfs(const Graph& g, vector<int>& index, vector<int>& color, int now) {
    // 現在の頂点と現在の頂点と繋がっている頂点の色が同じ時，0通り
    for(int next : g[now]) {
        if(color[next] == color[now]) return 0;
    }
    long long number = 1;
    // nowから行ける各頂点nextについて
    for(int next : g[now]) {
        // まだ到達していない時
        if(index[next] == -1) index[next] = index[now] + 1;
        if(index[next] == index[now] + 1) {
            long long tmp = 0;
            // 現在の頂点の色と異なる色を次の頂点には塗る
            color[next] = (color[now] + 1) % 3;
            tmp += dfs(g, index, color, next);
            color[next] = (color[now] + 2) % 3;
            tmp += dfs(g, index, color, next);
            // リセット
            color[next] = -1;
            number *= tmp;
            // tmp == 0 の時、早期に returnしてるのでidxが振り切れていない事に注意
            // よく分からない
            if(tmp == 0) break;
        }
    }
    return number;
}

int main() {
    int n, m;
    cin >> n >> m;
    Graph g(n);
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    // dfs順を記録．違う連結成分になら同じindexを持ちうる．
    vector<int> index(n, -1);
    vector<int> color(n, -1);
    long long number = 1;
    for(int i = 0; i < n; ++i) {
        if(index[i] != -1) continue;
        index[i] = 0;
        color[i] = 0;
        number *= dfs(g, index, color, i) * COLOR_NUMBER;
    }
    cout << number << endl;
}

// // 深さ優先探索
// long long dfs(const Graph& G, vector<bool>& seen, int v) {
//     long long number = 1;
//     seen[v] = true;  // v を訪問済にする

//     // v から行ける各頂点 next_v について
//     for(auto next_v : G[v]) {
//         if(seen[next_v]) continue;  // next_v が探索済だったらスルー
//         number = 2 * dfs(G, seen, next_v);  // 再帰的に探索
//     }
//     return number;
// }

// int main() {
//     int N, M;
//     cin >> N >> M;
//     Graph G(N + 1);
//     for(int i = 0; i < M; ++i) {
//         int A, B;
//         cin >> A >> B;
//         G[A].push_back(B);
//         G[B].push_back(A);
//     }
//     for(int i = 1; i <= N; ++i) {
//         if(G[i].size() >= COLOR_NUMBER) {
//             cout << 0 << endl;
//             return 0;
//         }
//     }
//     vector<bool> seen(N + 1, false);
//     long long number = 1;
//     // グラフが単純な線となっている端の頂点から調べる
//     for(int i = 1; i <= N; ++i) {
//         if(seen[i] == false && G[i].size() == 1) {
//             number *= 3;
//             number *= dfs(G, seen, i);
//         }
//     }
//     // 多角形となっているグラフを調べる
//     for(int i = 1; i <= N; ++i) {
//         if(seen[i] == false && G[i].size() == 2) {
//             number *= 3;
//             number *= dfs(G, seen, i);
//             number /= 2;
//             if(number != 6) number = number * 3 / 2;
//         }
//     }
//     // どこともつながっていない頂点を調べる
//     for(int i = 1; i <= N; ++i) {
//         if(seen[i] == false) number *= 3;
//     }
//     cout << number << endl;
//     return 0;
// }
