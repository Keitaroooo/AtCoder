#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

const int MAX_A = 1000000000;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> number(n + 1, vector<int>(n + 1));
    for(int i = 0; i < n + 1; ++i) {
        number[i][0] = 0;
        number[0][i] = 0;
    }
    int median_limit_number = k * k / 2 + 1;
    int lower_limit = -1;
    int upper_limit = MAX_A;
    while(lower_limit + 1 < upper_limit) {
        int medium = (lower_limit + upper_limit) / 2;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                number[i + 1][j + 1] =
                    number[i + 1][j] + number[i][j + 1] - number[i][j];
                if(a[i][j] > medium) number[i + 1][j + 1]++;
            }
        }
        bool flag = false;
        for(int i = 0; i < n - k + 1; ++i) {
            for(int j = 0; j < n - k + 1; ++j) {
                if(number[i + k][j + k] + number[i][j] - number[i][j + k] -
                       number[i + k][j] <
                   median_limit_number)
                    flag = true;
            }
        }
        if(flag == true)
            upper_limit = medium;
        else
            lower_limit = medium;
    }
    cout << upper_limit << endl;
    return 0;
}
