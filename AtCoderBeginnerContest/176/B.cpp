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
    string N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N.size(); ++i){
        count += N[i] - '0';
    }
    if(count % 9 == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}