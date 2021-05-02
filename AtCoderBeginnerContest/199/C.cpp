#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

string Flip(string s) {
    int n = s.size();
    n /= 2;
    string flip_s = s.substr(n, n);
    flip_s += s.substr(0, n);
    return flip_s;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    bool flip = false;
    for(int i = 0; i < q; ++i) {
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1) {
            if(flip == true) {
                if(a > n) a = a - 2 * n;
                if(b > n) b = b - 2 * n;
                a = a + n;
                b = b + n;
            }
            swap(s[a - 1], s[b - 1]);
        }
        if(t == 2) flip = !flip;
    }
    if(flip == true) s = Flip(s);
    cout << s << endl;
    return 0;
}
