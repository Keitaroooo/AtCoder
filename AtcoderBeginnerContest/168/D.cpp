#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    int N, M ;
    cin >> N >> M;
    vector<int> A(M+1), B(M+1);
    for (int i = 1; i <= M; i++)
    {
        cin >> A[i] >> B[i];
    }
    vector<int> now(N), ans(N + 1, 0);
    int count = 1;
    now[0] = 1;
    int start;

    for (int i = 0; i < count; i++)
    {
        start = count;
        for (int j = start; j <= M; j++)
        {
            if (now[i] == A[j])
            {
                if (ans[B[j]] == 0)
                {
                    ans[B[j]] = now[i];
                    now[count] = B[j];
                    swap(A[count], A[j]);
                    swap(B[count], B[j]);
                    count++;
                }
            }
            else if (now[i] == B[j])
            {
                if (ans[A[j]] == 0)
                {
                    ans[A[j]] = now[i];
                    now[count] = A[j];
                    swap(A[count], A[j]);
                    swap(B[count], B[j]);
                    count++;
                }
            }
        }
        if(count == N)
        {
            cout << "Yes" << endl;
            for (int i = 2; i <= N; i++)
            {
                cout << ans[i] << endl;
            }
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
    

}
