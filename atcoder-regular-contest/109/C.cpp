#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

char judge(char left, char right) {
    char winner;
    if(left == 'R') {
        if(right == 'P') {
            winner = right;
        } else {
            winner = left;
        }
    } else if(left == 'S') {
        if(right == 'R') {
            winner = right;
        } else {
            winner = left;
        }
    } else if(left == 'P') {
        if(right == 'S') {
            winner = right;
        } else {
            winner = left;
        }
    }
    return winner;
}

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // kの値を返してから-1する
    while(k--) {
        const string t = s + s;
        for(int i = 0; i < n; ++i) {
            s[i] = judge(t[2 * i], t[2 * i + 1]);
        }
    }
    cout << s[0] << endl;
    return 0;
}