#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MAX_TIME = 200001;

int main() {
    long long N, W;
    cin >> N >> W;
    vector<long long> amount(MAX_TIME);
    for(int i = 0; i < N; ++i){
        long long S, T,P;
        cin >> S >> T >> P;
        amount[S] += P;
        amount[T] -= P;
    }
    long long sum = 0;
    for(int i = 0; i < MAX_TIME; ++i) {
        sum += amount[i];
        if(sum > W){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}