#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int X;
    cin >> X;
    cout << 100 - X % 100 << endl;
    return 0;
}