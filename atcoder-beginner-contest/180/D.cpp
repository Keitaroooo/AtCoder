#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    unsigned long long X, Y, A, B;
    cin >> X >> Y >> A >> B;
    // int maxX = B/(A-1);
    long long experiencePoint = 0;
    // while(X < Y && X < maxX){
    while(X < Y && X <= B) {
        if(X * A < X + B) {
            X *= A;
        } else {
            X += B;
        }
        if(X < Y) {
            experiencePoint++;
        }
    }
    if(X < Y) {
        experiencePoint = experiencePoint + (Y - 1 - X) / B;
    }
    cout << experiencePoint << endl;
}