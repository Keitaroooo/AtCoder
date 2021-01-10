#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int dislikeNumber = 7;

int main() {
    int N;
    cin >> N;
    N = pow(2, N);
    int A;
    pair<int, int> maxAFront = make_pair(0, 0);
    for(int i = 0; i < N / 2; ++i) {
        cin >> A;
        if(A > maxAFront.second) {
            maxAFront.first = i + 1;
            maxAFront.second = A;
        }
    }
    pair<int, int> maxABack = make_pair(0, 0);
    for(int i = 0; i < N / 2; ++i) {
        cin >> A;
        if(A > maxABack.second) {
            maxABack.first = i + N / 2 + 1;
            maxABack.second = A;
        }
    }
    if(maxAFront.second < maxABack.second){
        cout << maxAFront.first << endl;
    }else{
        cout << maxABack.first << endl;
    }
    return 0;
}