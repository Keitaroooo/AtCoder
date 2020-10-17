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
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double angle;
    angle = abs((H * 60 + M) / 2. - (M * 6));
    angle = min(angle, 360 - angle);
    double ans;
    ans = sqrt((A * A) + (B * B) - (2 * A * B * cos(angle / 180 * M_PI)));
    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}


