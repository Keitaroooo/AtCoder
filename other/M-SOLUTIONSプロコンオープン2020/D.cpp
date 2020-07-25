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
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    long long stock = 0;
    long long money = 1000;
    for (int i = 0; i < N - 1; i++)
    {
        if (stock == 0)
        {
            if (A[i] < A[i + 1])
            {
                stock = money / A[i];
                money -= stock * A[i];
                if (i + 1 == N - 1)
                {
                    money += stock * A[i + 1];
                    stock = 0;
                }
            }
        }
        else
        {
            if (A[i] > A[i + 1])
            {
                money += stock * A[i];
                stock = 0;
            }
            else if (i + 1 == N - 1)
            {
                money += stock * A[i+1];
                stock = 0;
            }
        }
    }
    cout << money << endl;
    return 0;
}
