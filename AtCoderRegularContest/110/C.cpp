#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> position(N + 1);
    vector<int> P(N);
    for(int i = 0; i < N; ++i) {
        cin >> P[i];
        position[P[i]] = i;
    }
    vector<int> ansP = P;
    int maxCount = 0;
    vector<int> ans;
    for(int i = 1; i <= N; ++i) {
        if(maxCount < position[i]) {
            for(int j = position[i]; j > maxCount; --j) {
                ans.push_back(j);
                swap(ansP[j], ansP[j - 1]);
            }
            maxCount = position[i];
        }
    }
    sort(P.begin(), P.end());
    if(ansP == P) {
        for(int i = 0; i < N-1; ++i) {
            cout << ans[i] << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}