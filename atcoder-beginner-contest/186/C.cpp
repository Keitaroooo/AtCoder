#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int dislikeNumber = 7;

int main() {
    int N;
    cin >> N;
    int count = 0;
    for(int i = 1; i <= N; ++i) {
        int division = i;
        bool flag = false;
        while(division) {
            if(division % 10 == 7) {
                flag = true;
                break;
            }
            division /= 10;
        }
        division = i;
        while(division) {
            if(division % 8 == 7) {
                flag = true;
                break;
            }
            division /= 8;
        }
        if(flag) count++;
    }
    cout << N - count << endl;
    return 0;
}