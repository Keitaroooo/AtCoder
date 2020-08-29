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
    string S, T;
    cin >> S >> T;
    int count;
    int maxCount = 0;
    string subString;
    for(int i = 0; i <= S.size() - T.size(); ++i){
        count = 0;
        for(int j = 0; j < T.size(); ++j) {
            if(S[i + j] == T[j]) {
                count++;
            }
        }
        maxCount = max(count, maxCount);
    }
    cout << T.size() - maxCount << endl;
    return 0;
}