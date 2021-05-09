#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

void Output(vector<int> &a) {
    cout << a.size();
    for(int &x : a) cout << " " << x;
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<vector<int>> remainder_sequence(200, vector<int>(0));
    int count = min(n, 8);
    for(int i = 1; i < (1 << count); ++i) {
        int remainder = 0;
        vector<int> sequence;
        for(int j = 0; j < count; ++j) {
            if(i & (1 << j)) {
                sequence.push_back(j + 1);
                remainder += a[j];
                remainder %= 200;
            }
        }
        if(remainder_sequence[remainder].size() != 0) {
            cout << "Yes" << endl;
            Output(remainder_sequence[remainder]);
            Output(sequence);
            return 0;
        } else {
            remainder_sequence[remainder] = sequence;
        }
    }
    cout << "No" << endl;
}

// bool Judge(int i, int now, vector<int>& a, vector<vector<int>>& remainder) {
//     int size = remainder[now].size();
//     if(size == 0) return false;
//     bool duplicate = false;
//     for(int j = 0; j < size; ++j) {
//         if(remainder[now][j] <= i + 1) {
//             duplicate = true;
//             break;
//         }
//     }
//     if(duplicate == false) {
//         int next = (now + a[i]) % 200;
//         size = remainder[next].size();
//         if(size == 1) {
//             std::cout << "Yes" << endl;
//             std::cout << size;
//             sort(remainder[next].begin(), remainder[next].end());
//             for(int j = 0; j < size; ++j) {
//                 std::cout << " " << remainder[next][j];
//             }
//             remainder[now].push_back(i + 1);
//             sort(remainder[now].begin(), remainder[now].end());
//             size = remainder[now].size();
//             std::cout << endl << size;
//             for(int j = 0; j < size; ++j) {
//                 std::cout << " " << remainder[now][j];
//             }
//             std::cout << endl;
//             return true;
//         }
//         remainder[next].push_back(i + 1);
//     }
//     return false;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<vector<int>> remainder(200);
//     for(int i = 0; i < n; ++i) {
//         cin >> a[i];
//         a[i] %= 200;
//         int size = remainder[0 + a[i]].size();
//         if(size == 1) {
//             std::cout << "Yes" << endl;
//             std::cout << size;
//             for(int j = 0; j < size; ++j) {
//                 std::cout << " " << remainder[0 + a[i]][j];
//             }
//             size = remainder[a[i]].size();
//             std::cout << endl << size;
//             std::cout << " " << i + 1 << endl;
//             return 0;
//         }
//         remainder[a[i]].push_back(i + 1);
//     }
//     for(int i = 0; i < n; ++i) {
//         for(int now = 0; now < 200; ++now) {
//             if(Judge(i, now, a, remainder) == true) return 0;
//         }
//     }
//     std::cout << "No" << endl;
//     return 0;
// }
