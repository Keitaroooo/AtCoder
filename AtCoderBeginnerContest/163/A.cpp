#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R;
    cin >> R;
    cout << fixed << setprecision(6) << 2 * R * M_PI << endl;
    return 0;
}
