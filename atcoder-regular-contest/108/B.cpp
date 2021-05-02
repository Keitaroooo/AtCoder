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
    int N;
    cin >> N;
    string s;
    cin >> s;
    string foxBox = "";
    int count = 0;
    for(int i = 0; i < N; ++i) {
        if(s[i] == 'f') {
            foxBox.push_back('x');
            if(i + 1 < N && s[i + 1] == 'o') {
                i++;
            } else {
                foxBox.push_back('o');
            }
        } else if(s[i] == foxBox.back()) {
            foxBox.pop_back();
            if(s[i] == 'x') {
                count++;
            } else {
                if(i + 1 < N && s[i + 1] == foxBox.back()) {
                    count++;
                    foxBox.pop_back();
                    i++;
                }
            }
        } else {
            foxBox = "";
        }
    }
    cout << N - 3 * count << endl;
}
