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
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ans = a * c;
    ans = max(ans, b * d);
    ans = max(ans, a * d);
    ans = max(ans, b * c);
    cout << ans << endl;
    return 0;
}