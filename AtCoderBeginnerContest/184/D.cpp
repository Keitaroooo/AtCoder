#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
// const int maxAllNumber = 298;
// const int maxNumber = 100;

// double partOfExpectation(int i, int coin, int allCoinNumber) {
//     int otherCoinNumber = i - (maxNumber - coin);
//     double expectation;
//     if(otherCoinNumber >= 0) {
//         expectation = maxNumber - coin;
//         for(int j = ; j < maxNumber; ++j) {
//             expectation *= (double)j / (double)allCoinNumber;
//             allCoinNumber++;
//         }
//         for(int j = (B + C); j < (B + C) + otherCoinNumber; ++j) {
//             expectation *= (double)j / (double)allCoinNumber;
//             allCoinNumber++;
//         }
//         expectation += expectation;
//     }
// }

// int main() {
//     int A, B, C;
//     cin >> A >> B >> C;
//     double expectation = 0;
//     double tmpExpectation;
//     int allCoinNumber;
//     int otherCoinNumber;
//     int maxABC = max(A, B);
//     maxABC = max(maxABC, C);
//     int maxI = maxAllNumber - (A + B + C);
//     for(int i = maxNumber - maxABC; i <= maxI; ++i) {
//         otherCoinNumber = i - (maxNumber - A);
//         allCoinNumber = A + B + C;
//         if(otherCoinNumber >= 0) {
//             tmpExpectation = i;
//             for(int j = A; j < maxNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             for(int j = (B + C); j < (B + C) + otherCoinNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             expectation += tmpExpectation;
//         }
//         otherCoinNumber = i - (maxNumber - B);
//         allCoinNumber = A + B + C;
//         if(otherCoinNumber >= 0) {
//             tmpExpectation = i;
//             for(int j = B; j < maxNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             for(int j = (A + C); j < (A + C) + otherCoinNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             expectation += tmpExpectation;
//         }
//         otherCoinNumber = i - (maxNumber - C);
//         allCoinNumber = A + B + C;
//         if(otherCoinNumber >= 0) {
//             tmpExpectation = i;
//             for(int j = C; j < maxNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             for(int j = (A + B); j < (A + B) + otherCoinNumber; ++j) {
//                 tmpExpectation *= (double)j / (double)allCoinNumber;
//                 allCoinNumber++;
//             }
//             expectation += tmpExpectation;
//         }
//     }
//     cout << setprecision(10) << expectation << endl;
//     return 0;
// }

vector<vector<vector<double>>> dp(101,
                                  vector<vector<double>>(101,
                                                         vector<double>(101)));

double f(int A, int B, int C) {
    //計算回数を減らしている
    if(dp[A][B][C]) {
        return dp[A][B][C];
    }
    if(A == 100 || B == 100 || C == 100) {
        return 0;
    }
    // cout << A << " " << B << " " << C << endl;
    double ans = 0;
    ans += (f(A + 1, B, C) + 1) * A / (A + B + C);
    ans += (f(A, B + 1, C) + 1) * B / (A + B + C);
    ans += (f(A, B, C + 1) + 1) * C / (A + B + C);
    dp[A][B][C] = ans;
    return ans;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << setprecision(10) << f(A, B, C) << endl;
}