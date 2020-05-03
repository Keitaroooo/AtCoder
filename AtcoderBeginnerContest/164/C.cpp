#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;
    set<string> S;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        S.insert(s);
    }

    cout << S.size() << endl;

    return 0;
}
