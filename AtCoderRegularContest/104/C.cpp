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
    long long count = 0;
    for(int c = 1; c < N; ++c) {
        int maxA = sqrt(N-c);
        for(int a = 1; a <= maxA; ++a){
            if((N-c) % a == 0){
                count += 2;
            }
        }
        if(maxA*maxA == (N-c)){
            count--;
        }
    }
    cout << count << endl;
    return 0;
}