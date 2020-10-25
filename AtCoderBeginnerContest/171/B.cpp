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
    int N, K;
    cin >> N >> K;
    vector<int> p(N);
    for (int i = 0; i < N; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int total = 0;
    for(int i = 0; i < K; i++){
        total += p[i];
    }
    cout << total << endl;
    return 0;
}
