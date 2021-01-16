#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int a;
    vector<int> number(N, 0);
    for(int i = 0; i < N; ++i) {
        cin >> a;
        number[a]++;
    }
    int minNumber = K;
    int answer = 0;
    for(int i = 0; i < N; ++i){
        minNumber = min(number[i], minNumber);
        answer += minNumber;
    }
    cout << answer << endl;
    return 0;
}
