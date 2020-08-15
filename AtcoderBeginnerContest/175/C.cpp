#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    long long X, K, D;
    cin >> X >> K >> D;
    long long count = X / D;
    if(abs(count) >= K) {
        if(X >= 0) {
            cout << X - K * D << endl;
        } else {
            cout << abs(X + K * D) << endl;
        }

    } else {
        if(count % 2 == 0) {
            if(K % 2 == 0) {
                cout << abs(X - count*D) << endl;
            } else if(count >= 0) {
                cout << abs(X - count*D -D) << endl;
            } else {
                cout << X - count*D + D << endl;
            }
        } else {
            if(K % 2 == 1) {
                cout << abs(X - count*D) << endl;
            } else if(count >= 0) {
                cout << abs(X - count*D - D) << endl;
            } else {
                cout << X - count*D + D << endl;
            }
        }
    }
    return 0;
}