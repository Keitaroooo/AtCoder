#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M, T;
    cin >> N >> M >> T;
    int leftBattery = N;
    int A, B, beforeB = 0;
    for(int i = 0; i < M; ++i) {
        cin >> A >> B;
        for(int time = beforeB; time < A; ++time) {
            leftBattery--;
            if(leftBattery <= 0) {
                cout << "No" << endl;
                return 0;
            }
        }
        for(int time = A; time < B; ++time) {
            if(leftBattery < N) {
                leftBattery++;
            }
        }
        beforeB = B;
    }
    for(int time = beforeB; time < T; ++time) {
        leftBattery--;
        if(leftBattery <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}