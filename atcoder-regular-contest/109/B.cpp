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
    long long n;
    cin >> n;
    // 最初は1からnまでの丸太を全て選び、その後n+1の丸太と交換する
    long long unnecessaryLog = sqrt(2 * (n + 1)) + 1;
    while(true){
        if(n + 1 >= (1 + unnecessaryLog) * unnecessaryLog / 2) {
            break;
        }
        unnecessaryLog--;
    }
    cout << n - unnecessaryLog + 1 << endl;
}
