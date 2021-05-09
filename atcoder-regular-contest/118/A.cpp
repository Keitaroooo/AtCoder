#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long t, n;
    cin >> t >> n;
    n *= 100;
    long long ans = (100 + t) * (n / t) / 100;
    if(n % t != 0)
        ans++;
    else
        ans--;

    cout << ans << endl;
    return 0;
}
