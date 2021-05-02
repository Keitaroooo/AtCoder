#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MAX_A = 100000;

int main() {
    int N;
    cin >> N;
    vector<int> length(MAX_A + 1, -1);
    int maxEat = 0;
    int A, beforeA;
    beforeA = 0;
    cin >> A;
    for(int j = beforeA + 1; j <= A; ++j) {
        length[j] = 0;
    }
    beforeA = A;
    for(int i = 1; i < N; ++i) {
        cin >> A;
        for(int j = beforeA + 1; j <= A; ++j) {
            length[j] = i;
        }
        for(int j = A + 1; j <= beforeA; ++j) {
            if(length[j] != -1) maxEat = max(maxEat, j * (i - length[j]));
            length[j] = -1;
        }
        beforeA = A;
    }
    A = 0;
    for(int j = A + 1; j <= beforeA; ++j) {
        if(length[j] != -1) maxEat = max(maxEat, j * (N - length[j]));
        length[j] = -1;
    }
    cout << maxEat << endl;
    return 0;
}