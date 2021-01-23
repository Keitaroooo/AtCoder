#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int V, P;
    int amountDrunk = 0;
    X *= 100;
    for(int i = 0; i < N; ++i) {
        cin >> V >> P;
        amountDrunk += V * P;
        if(amountDrunk > X){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}