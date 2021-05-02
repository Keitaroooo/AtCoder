#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    string N;
    int K;
    cin >> N >> K;
    for(int i = 0; i < K; ++i) {
        sort(N.begin(), N.end(), greater<int>{});
        int g1 = stoi(N);
        sort(N.begin(), N.end());
        int g2 = stoi(N);
        N = to_string(g1 - g2);
    }
    cout << N << endl;
    return 0;
}