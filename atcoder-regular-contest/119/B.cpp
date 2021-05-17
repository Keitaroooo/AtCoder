#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    set<int> s_one_position, t_one_position;
    queue<int> s_zero_position, t_zero_position;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1')
            s_one_position.insert(i);
        else
            s_zero_position.push(i);
        if(t[i] == '1')
            t_one_position.insert(i);
        else
            t_zero_position.push(i);
    }
    if(s_one_position.size() != t_one_position.size()) {
        cout << -1 << endl;
        return 0;
    }
    int count = 0;
    while(s_one_position.size() > 0) {
        int s_one_position_front = *s_one_position.begin();
        int t_one_position_front = *t_one_position.begin();
        if(s_one_position_front == t_one_position_front) {
            s_one_position.erase(s_one_position_front);
            t_one_position.erase(t_one_position_front);
        } else if(s_one_position_front < t_one_position_front) {
            s_one_position.erase(s_one_position_front);
            int s_zero_position_front = s_zero_position.front();
            while(s_zero_position_front <= s_one_position_front) {
                s_zero_position.pop();
                s_zero_position_front = s_zero_position.front();
            }
            s_one_position.insert(s_zero_position_front);
            s_zero_position.pop();
            count++;
        } else {
            t_one_position.erase(t_one_position_front);
            int t_zero_position_front = t_zero_position.front();
            while(t_zero_position_front <= t_one_position_front) {
                t_zero_position.pop();
                t_zero_position_front = t_zero_position.front();
            }
            t_one_position.insert(t_zero_position_front);
            t_zero_position.pop();
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
