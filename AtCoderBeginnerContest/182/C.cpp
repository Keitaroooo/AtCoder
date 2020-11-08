#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// int main() {
//     string N;
//     cin >> N;
//     int count = 0;
//     for(int i = 0; i < N.size(); ++i) {
//         if((N[i] - '0') % 3 == 0) {
//             N.erase(i, 1);
//             count++;
//             if(N.size() == 0){
//                 break;
//             }
//             i--;
//         }
//     }
//     sort(N.begin(), N.end());
//     while(true) {
//         if(N[0] == '1' && N[1] == '1' && N[2] == '1') {
//             N.erase(0, 3);
//             count += 3;
//         } else {
//             break;
//         }
//     }
//     for(int i = 0; i < N.size() - 1; ++i) {
//         for(int j = i + 1; j < N.size(); ++j) {
//             if(((N[i] - '0') + (N[j] - '0')) % 3 == 0) {
//                 N.erase(i, 1);
//                 N.erase(j - 1, 1);
//                 count += 2;
//                 i--;
//                 break;
//             }
//         }
//         if(N.size() == 0) {
//             break;
//         }
//     }
//     if(count == 0) {
//         cout << -1 << endl;
//     } else {
//         cout << N.size() << endl;
//     }
//     return 0;
// }

// int main() {
//     string N;
//     cin >> N;
//     int count = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0; i < N.size(); ++i) {
//         switch((N[i] - '0') % 3) {
//             case 0:
//                 count++;
//                 break;
//             case 1:
//                 count1++;
//                 if(count1 == 3) {
//                     count += 3;
//                     count1 = 0;
//                 }
//                 break;
//             case 2:
//                 count2++;
//                 if(count2 == 3) {
//                     count += 3;
//                     count2 = 0;
//                 }
//                 break;
//         }
//     }
//     while(count1 >=1 && count2 >= 1){
//         count+=2;
//         count1--;
//         count2--;
//     }

//     if(count == 0) {
//         cout << -1 << endl;
//     } else {
//         cout << N.size()-count << endl;
//     }
//     return 0;
// }

int main() {
    string N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N.size(); ++i) {
        count += N[i] - '0';
    }
    if(count % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(N.size() == 1) {
        cout << -1 << endl;
        return 0;
    }
    if(count % 3 == 1) {
        for(int i = 0; i < N.size(); ++i) {
            if(N[i] % 3 == 1) {
                cout << 1 << endl;
                return 0;
            }
        }
        if(N.size() == 2){
            cout << -1 << endl;
        }else{
            cout << 2 << endl;
        }
        return 0;
    }else{
        for(int i = 0; i < N.size(); ++i) {
            if(N[i] % 3 == 2) {
                cout << 1 << endl;
                return 0;
            }
        }
        if(N.size() == 2) {
            cout << -1 << endl;
        } else {
            cout << 2 << endl;
        }
        return 0;
    }
}