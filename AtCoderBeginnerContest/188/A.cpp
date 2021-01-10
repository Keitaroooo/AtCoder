#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    if(abs(X-Y) < 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}