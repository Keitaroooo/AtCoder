#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> mountain(n);
    for(int i = 0; i < n; ++i) cin >> mountain[i].second >> mountain[i].first;
    sort(mountain.begin(), mountain.end());
    cout << mountain[n - 2].second << endl;
    return 0;
}
