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
    vector<int> x(5);
    for(int i = 0; i < 5; i++){
        cin >> x[i];
        if(x[i] == 0){
            cout << i + 1 << endl;
        }
    }
    return 0;
}
