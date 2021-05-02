#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long N, C;
    cin >> N >> C;
    long long a, b, c;
    N = 2 * N;
    vector<pair<long long, long long>> increase(N);
    for(int i = 0; i < N; i += 2) {
        cin >> a >> b >> c;
        increase[i] = make_pair(a, c);
        increase[i + 1] = make_pair(b+1, -c);
    }
    sort(increase.begin(), increase.end());
    long long cost = 0;
    long long minCost = 0;
    for(int i = 0; i < N; ++i) {
        cost += increase[i].second;
        int days;
        while(true) {
            if(i == N - 1) {
                days = 0;
                break;
            } else if(increase[i].first == increase[i + 1].first) {
                i++;
                cost += increase[i].second;
            } else {
                days = increase[i + 1].first - increase[i].first;
                break;
            }
        }
        minCost += min(cost, C) * days;
    }
    cout << minCost << endl;
}