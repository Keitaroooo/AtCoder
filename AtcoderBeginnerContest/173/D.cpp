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
    char a;
    cin >> a;
    if('A' <= a && a <= 'Z'){
        cout << 'A' << endl;
    }else{
        cout << 'a' << endl;
    }
    return 0;
}