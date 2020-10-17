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
    int X, N;
    cin >> X >> N;
    vector<int> p(N);
    for (int i = 0; i < N; i++){
        cin >> p[i];
    }
    int absmin = 1000;

    for (int i = 0; i <= 50; i++){
        bool flag1 = false;
        bool flag2 = false;
        for (int j = 0; j < N; j++){
            if (X - i == p[j]){
                flag1 = true;
            }
            if (X + i == p[j]){
                flag2 = true;
            }
        }
        if (flag1 == false){
            cout << X - i << endl;
            return 0;
        }else if(flag2 == false){
            cout << X + i << endl;
            return 0;
        }
    }
}
