#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    const long long MAX_B = log2(n);
    long long min_abc = n;
    for(long long b = 0; b <= MAX_B; ++b) {
        long long a = n / (long long)pow(2, b);
        long long c = n % (long long)pow(2, b);
        min_abc = min(min_abc, a + b + c);
    }
    cout << min_abc << endl;
    return 0;
}
