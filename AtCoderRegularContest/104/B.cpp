#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int aCount, tCount, cCount, gCount, count = 0;
    for(int i = 2; i <= N; ++i) {
        aCount = 0;
        tCount = 0;
        cCount = 0;
        gCount = 0;
        for(int j = 0; j < i; ++j) {
            switch(S[j]) {
                case 'A':
                    aCount++;
                    break;
                case 'T':
                    tCount++;
                    break;
                case 'C':
                    cCount++;
                    break;
                case 'G':
                    gCount++;
                    break;
            }
        }
        if(aCount == tCount && cCount == gCount) {
            count++;
        }
        for(int j = i; j < N; ++j) {
            switch(S[j]) {
                case 'A':
                    aCount++;
                    break;
                case 'T':
                    tCount++;
                    break;
                case 'C':
                    cCount++;
                    break;
                case 'G':
                    gCount++;
                    break;
            }
            switch(S[j - i]) {
                case 'A':
                    aCount--;
                    break;
                case 'T':
                    tCount--;
                    break;
                case 'C':
                    cCount--;
                    break;
                case 'G':
                    gCount--;
                    break;
            }
            if(aCount == tCount && cCount == gCount) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}