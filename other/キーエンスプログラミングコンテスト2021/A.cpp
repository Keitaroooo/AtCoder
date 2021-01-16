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
    vector<long long> a(N), b(N);
    for(int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < N; ++i) {
        cin >> b[i];
    }

    int maxIndexOfA = 0;
    int maxIndexOfB = 0;
    int nowIndexOfA = 0;
    int nowIndexOfB = 0;
    cout << a[nowIndexOfA] * b[nowIndexOfB] << endl;

    for(int i = 1; i < N; ++i) {
        if(a[i] > a[maxIndexOfA]) maxIndexOfA = i;
        if(a[maxIndexOfA] * b[i] > a[nowIndexOfA] * b[nowIndexOfB]){
            nowIndexOfA = maxIndexOfA;
            nowIndexOfB = i;
        }
        cout << a[nowIndexOfA] * b[nowIndexOfB] << endl;
    }
    return 0;
}