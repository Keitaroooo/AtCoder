#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int count = 0;
    int sum = 0;
    int n;
    for (int i = 1;i <= N; i++)
    {
        sum = 0;
        n = i;
        while (n)
        {
            sum += (n % 10);
            n /= 10;
        }
        if(A <= sum && sum <= B)
        {
            count += i;
        }

    }
    cout << count << endl;
    return 0;
}
