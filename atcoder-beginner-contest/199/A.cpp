#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A * A + B * B < C * C)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
