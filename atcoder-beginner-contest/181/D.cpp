#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// bool judge(string S, int sSize, vector<int> number) {
//     int size = S.size();
//     if(size == 0) {
//         int n = 0;
//         for(int i = 0; i < sSize; ++i) {
//             n += number[i] * pow(10, sSize - 1 - i);
//         }
//         // cout << n << endl;
//         // n += S[0];
//         if(n % 8 == 0) {
//             return true;
//         }
//     }
//     for(int i = 0; i < size; ++i) {
//         number[sSize - size] = (int)S[i] -48;
//         // cout << number[6 - size] << endl;
//         string s = "";
//         for(int j = 0; j < size; ++j) {
//             if(i != j) {
//                 s.push_back(S[j]);
//             }
//         }
//         if(judge(s, sSize,number)){
//             return true;
//         }
//     }
//     return false;
// }

bool solve(string S) {
    int size = S.size();
    if(size == 1) {
        return S == "8";
    }
    if(size == 2) {
        if(stoi(S) % 8 == 0) {
            return true;
        }
        swap(S[0], S[1]);
        return stoi(S) % 8 == 0;
    }
    vector<int> numberCount(10);
    // string s = "";
    for(int i = 0; i < size; ++i) {
        if(numberCount[S[i] - '0'] < 3) {
            numberCount[S[i] - '0']++;
            // s.push_back(S[i]);
        }
    }
    for(int i = 112; i < 1000; i += 8) {
        vector<int> nC = numberCount;
        bool flag = true;
        for(char x : to_string(i)) {
            if(nC[x - '0'] == 0) {
                flag = false;
            }
            nC[x - '0']--;
        }
        if(flag) {
            return true;
        }
    }
    return false;
}

int main() {
    string S;
    cin >> S;
    // int sSize = s.size();
    // vector<int> number(sSize);
    // if(judge(s,sSize,number)) {
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }
    puts(solve(S) ? "Yes" : "No");
    return 0;
}