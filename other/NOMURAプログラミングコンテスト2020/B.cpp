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
    string T;
    cin >> T;
    if(T.length() == 1){
        if(T[0] == '?'){
            T[0] = 'D';
            cout << T << endl;
            return 0;
        }
    }
    if(T[0] == '?'){
        if(T[1] == 'P'){
            T[0] = 'D';
        }else{
            T[0] = 'P';
        }
    }
    for (int i = 1; i < T.size() - 1; i++){
        if(T[i] == '?'){
            if(T[i -1] == 'P'){
                T[i] = 'D';
            }
            else if (T[i + 1] == 'P')
            {
                T[i] = 'D';
            }else{
                T[i] = 'P';
            }
        }
    }
    if (T[T.size()-1] == '?')
    {
        T[T.size()-1] = 'D';
    }
    cout << T << endl;
    return 0;
}

