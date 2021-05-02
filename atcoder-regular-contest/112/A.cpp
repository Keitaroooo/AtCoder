#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        long long L, R;
        cin >> L >> R;
        long long count = R - (2 * L) + 1;
        if(count > 0) {
            count = (count + 1) * count / 2;
        }else{
            count = 0;
        }
        cout << count << endl;
    }
    return 0;
}