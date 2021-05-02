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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int minTime = x;
    int moveTime = min(2 * x, y);
    if(a < b){
        minTime += moveTime * (b - a);
    }else if(a - 1 > b){
        minTime += moveTime * (a - 1 - b);
    }
    cout << minTime << endl;
    return 0;
}