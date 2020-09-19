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
    int N;
    cin >> N;
    int D1,D2,count=0;
    for(int i = 0; i < N; ++i){
        cin >> D1 >> D2;
        if(D1 == D2){
            count++;
        }else{
            count = 0;
        }
        if(count == 3){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}