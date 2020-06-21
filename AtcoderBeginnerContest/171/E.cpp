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
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    vector<int> sum(100000,0);
    for (int i = 0; i < N; i++){
        int count = 0;
        int A = a[i];
        while(true){
            sum[count] = ((A % 2) + sum[count]) % 2;
            if((A /= 2) == 0){
                break;
            }
            count++;
        }
    }
    for (int i = 0; i < N; i++){
        int count = 0;
        int A = a[i];
        a[i] = 0;
        while (true)
        {
            a[i] += int(pow(2,count))*(((A % 2) + sum[count]) % 2);
            if ((A /= 2) == 0)
            {
                break;
            }
            count++;
        }
    }
    for (int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
