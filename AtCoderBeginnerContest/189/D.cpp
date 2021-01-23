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
    long long ans = 1;
    for(int i = 1; i <= N; ++i) {
        string S;
        cin >> S;
        if(S == "OR") {
            ans += (long long)pow(2, i);
        }
    }
    cout << ans << endl;
    return 0;
}