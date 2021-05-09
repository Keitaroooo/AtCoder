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
    int N;
    cin >> N;
    if(N % 2 == 0) {
        cout << "White" << endl;
    } else {
        cout << "Black" << endl;
    }
    return 0;
}