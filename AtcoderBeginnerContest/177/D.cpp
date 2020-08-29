// #define _USE_MATH_DEFINES
// #include <algorithm>
// #include <cmath>
// #include <iomanip>
// #include <iostream>
// #include <set>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;
//     vector<set<int>> ans(N + 1, set<int>{});
//     int A, B;
//     for(int i = 0; i < M; ++i) {
//         cin >> A >> B;
//         ans[A].insert(B);
//         ans[B].insert(A);
//     }
//     int maxSize = 0;
//     for(int i = 1; i <= N; ++i) {
//         maxSize = max((int)ans[i].size(), maxSize);
//     }
//     cout << maxSize+1 << endl;
//     return 0;
// }

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct UnionFind {
    //自身が親であれば、その集合に属する頂点数に-1を掛けたもの
    //そうでなければ親のid
    vector<int> r;

    UnionFind(int N) { r = vector<int>(N, -1); }

    int root(int x) {
        if(r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }

    int size(int x) { return -r[root(x)]; }
};

int main() {
    int N, M;
    cin >> N >> M;

    //友達集合を作る
    UnionFind UF(N);
    for(int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A -= 1;
        B -= 1;
        UF.unite(A, B);
    }

    //最大の友達集合を求める
    int ans = 0;
    for(int i = 0; i < N; i++) {
        ans = max(ans, UF.size(i));
    }

    cout << ans << endl;
}