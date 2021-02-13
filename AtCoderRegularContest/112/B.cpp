#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long B, C;
    cin >> B >> C;
    long long count = 1;
    if(B < 0) {
        count++;
        if((C - 1) / 2 < -B) {
            count += 2 * ((C - 1) / 2);
            if((C - 1) % 2 == 0) count--;
        } else {
            count += 2 * (-B - 1) + 1;
        }
    } else if(B > 0) {
        if(C / 2 < B) {
            count += 2 * (C / 2);
            if(C % 2 == 0) count--;
        } else {
            count += 2 * (B - 1) + 1;
        }
    }
    // -1倍する場合と1を引く場合の2つを続けていく
    if(C == 1 && B > 0) C++;
    count += C - 1;
    cout << count << endl;
    return 0;
}
