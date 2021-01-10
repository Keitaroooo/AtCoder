#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const long long CONNECTION_NUMBER = 10000000000;

int main() {
    int N;
    cin >> N;
    string T;
    cin >> T;
    int startPosition = 0;
    if(N == 1) {
        if(T == "0") {
            cout << CONNECTION_NUMBER << endl;
            return 0;
        } else {
            cout << 2 * CONNECTION_NUMBER << endl;
            return 0;
        }
    } else if(N == 2) {
        if(T == "11") {
            startPosition = 0;
        } else if(T == "10") {
            startPosition = 1;
        } else if(T == "01") {
            startPosition = 2;
        } else {
            startPosition = -1;
        }
    } else {
        string tmpString = T.substr(0,3);
        if(tmpString == "110") {
            startPosition = 0;
        } else if(tmpString == "101") {
            startPosition = 1;
        } else if(tmpString == "011") {
            startPosition = 2;
        } else {
            startPosition = -1;
        }
    }
    for(int i = 0; i < N; ++i) {
        switch(startPosition) {
            case 0:
                if(i % 3 == 0) {
                    if(T[i] == '0') startPosition = -1;
                } else if(i % 3 == 1) {
                    if(T[i] == '0') startPosition = -1;
                } else {
                    if(T[i] == '1') startPosition = -1;
                }
                break;
            case 1:
                if(i % 3 == 0) {
                    if(T[i] == '0') startPosition = -1;
                } else if(i % 3 == 1) {
                    if(T[i] == '1') startPosition = -1;
                } else {
                    if(T[i] == '0') startPosition = -1;
                }
                break;
            case 2:
                if(i % 3 == 0) {
                    if(T[i] == '1') startPosition = -1;
                } else if(i % 3 == 1) {
                    if(T[i] == '0') startPosition = -1;
                } else {
                    if(T[i] == '0') startPosition = -1;
                }
                break;
            default:
                break;
        }
    }
    if(startPosition == -1) {
        cout << 0 << endl;
    } else {
        cout << (3*CONNECTION_NUMBER - (startPosition + N)) / 3 + 1<< endl;
    }
}
