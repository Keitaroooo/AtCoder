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
    long long N;
    cin >> N;
    vector<char> name(100000);
    int count = 0;
    while (true)
    {
        N--;
        name[count] = char((N % 26) + 'a');
        N /= 26;
        if (N == 0)
        {
            break;
        }
        count++;
    }
    for (int i = count; i >= 0; i--){
        cout << name[i];
    }
    cout << endl;
    return 0;
}
