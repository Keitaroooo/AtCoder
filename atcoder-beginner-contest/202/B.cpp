#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int size = s.size();
    for(int i = 0; i < size; ++i) {
        if(s[i] == '6')
            s[i] = '9';
        else if(s[i] == '9')
            s[i] = '6';
    }
    cout << s << endl;
    return 0;
}
