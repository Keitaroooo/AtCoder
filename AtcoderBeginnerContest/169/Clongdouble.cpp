#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    long double A;
    long double B;
    cin >> A >> B;
    long double sum = A * B;
    cout << fixed << setprecision(0) << floor(sum) << endl;
    return 0;
}
