#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int count = 0;
    while(true)
    {
        for (int i = 0; i < N; i++)
        {
            if(A[i] % 2 == 1)
            {
                cout << count << endl;
                return 0;
            }
            else
            {
                A[i] /= 2;
            }
        }
        count++;
    }
    return 0;
}
