#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    string X;
    long long M;
    cin >> X >> M;
    long long xSize = X.size() - 1;
    if(xSize == 0) {
        if(M >= X[0] - '0')
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return 0;
    }
    long long max = (long long)pow(10, log10(M) / (xSize));
    string x = X;
    sort(x.begin(), x.end(), greater<int>{});
    long long d = (long long)(x[0] - '0') + 1;
    while(max >= d) {
        long long number = 0;
        long long exp = 1;
        for(int i = xSize; i >= 0; --i) {
            number += (long long)(X[i] - '0') * exp;
            exp *= max;
        }
        if(number <= M) break;
        max--;
    }
    if(max < d) {
        cout << 0 << endl;
    } else {
        cout << max - d + 1 << endl;
    }
    return 0;
}