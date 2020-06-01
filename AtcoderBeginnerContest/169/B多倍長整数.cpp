#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
const unsigned long long INF = 1000000000000000000;

int main()
{
    int N;
    cin >> N;
    vector<unsigned long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if(A[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    int128_t sum = 1;
    for (int i = 0; i < N; i++)
    {
        sum *= A[i];
        if(sum > INF){
            cout << -1 << endl;
            return 0;
        }
    }

    cout << sum << endl;
    return 0;
}
