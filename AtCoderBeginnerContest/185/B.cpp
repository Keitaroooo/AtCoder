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
    string S;
    cin >> S;
    for(int i = 0; i < N; ++i) {
        if(S[i] == 'x') {
            if(X > 0) {
                X--;
            }
        } else {
            X++;
        }
    }
    cout << X << endl;
    return 0;
}