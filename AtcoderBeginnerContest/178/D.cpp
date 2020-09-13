#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int MOD = 1000000007;

long long countFunction(int S) {
    long long count = 0;
    count += S - 5;
    for(int i = 3; i <= S - 6; ++i){
        count += countFunction(S - i);
        count %= MOD;
    }
    return count;
}
int main() {
    int S;
    cin >> S;
    long long count = 0;
    if(S >=3){
        count++;
    }
    count += countFunction(S);
    count %= MOD;
    cout << count << endl;
    return 0;
}