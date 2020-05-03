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
    int N, K;
    cin >> N >> K;
    int d;
    int A;
    set<int> hasConfection;
    for (int i = 0; i < K; i++)
    {
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            cin >> A;
            hasConfection.insert(A);
        }
    }
    
    cout << N - hasConfection.size() << endl;
    return 0;
}
