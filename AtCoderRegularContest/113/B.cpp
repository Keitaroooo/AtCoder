#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    B = B % 100;
    C = C % 4 ? C % 4 : 4;
    B = pow(B, C);
    A = A % 100;
    B = B % 4 ? B % 4 : 4;
    A = pow(A, B);
    cout << A % 10 << endl;
    return 0;
}
