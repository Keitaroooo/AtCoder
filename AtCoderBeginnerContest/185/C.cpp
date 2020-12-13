#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int cutNumber = 11;

int main() {
    long long L;
    cin >> L;
    L--;
    long long count = 1;
    for(int i = 1; i <= cutNumber; ++i) {
        count *= L;
        count /= i;
        L--;
    }
    cout << count << endl;
    return 0;
}

// int main() {
//     long long L;
//     cin >> L;
//     L--;
//     vector<long long> division = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
//     long long count = 1;
//     for(int i = 0; i < cutNumber; ++i) {
//         long long tmpL = L;
//         for(int j = 0; j < division.size(); ++j) {
//             if((tmpL % division[j]) == 0) {
//                 tmpL /= division[j];
//                 division.erase(division.begin() + j);
//                 j--;
//             }
//         }
//         count *= tmpL;
//         for(int j = 0; j < division.size(); ++j) {
//             if((count % division[j]) == 0) {
//                 count /= division[j];
//                 division.erase(division.begin() + j);
//                 j--;
//             }
//         }
//         L--;
//     }
//     cout << count << endl;
//     return 0;
// }