#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

const int SECRET_NUMBER_NUMBER = 4;

int main() {
    string s;
    cin >> s;
    int s_size = s.size();
    int o_size = 0;
    int x_size = 0;
    for(int i = 0; i < s_size; ++i) {
        if(s[i] == 'o')
            o_size++;
        else if(s[i] == 'x')
            x_size++;
    }
    bool possible = true;
    if(o_size > SECRET_NUMBER_NUMBER) possible = false;
    if(x_size == s_size) possible = false;
    if(possible == false) {
        cout << 0 << endl;
        return 0;
    }
    int secret_number_size = pow(s_size, SECRET_NUMBER_NUMBER);
    int secret_number_count = 0;
    for(int i = 0; i < secret_number_size; ++i) {
        int secret_number = i;
        string secret_number_judge(s_size, '?');
        for(int j = 0; j < SECRET_NUMBER_NUMBER; ++j) {
            secret_number_judge[secret_number % s_size] = 'o';
            secret_number /= s_size;
        }
        bool possible = true;
        for(int j = 0; j < s_size; ++j) {
            if(s[j] == 'o' && secret_number_judge[j] != 'o') possible = false;
            if(s[j] == 'x' && secret_number_judge[j] == 'o') possible = false;
        }
        if(possible == true) secret_number_count++;
    }
    cout << secret_number_count << endl;
    return 0;
}
