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
    unsigned long long A;
    double B;
    cin >> A >> B;
    unsigned long long sum = B * 100 + 0.1;
    sum *= A;
    cout << sum/100 << endl;
    return 0;
}
