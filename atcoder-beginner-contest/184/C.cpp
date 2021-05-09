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
    long long r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int minCount;
    if(r1 == r2 && c1 == c2) {
        minCount = 0;
    } else if(r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 ||
              abs(r1 - r2) + abs(c1 - c2) <= 3) {
        minCount = 1;
    } else if((r1+c1) % 2 == (r2+c2) % 2 || abs(c1+(r2-r1) -c2) <=3 || abs(c1-(r2-r1) - c2) <= 3){
        minCount = 2;
    }else{
        minCount = 3;
    }
    cout << minCount << endl;
    return 0;
}