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
    vector<int> L(N);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    // sort(L.begin(), L.end());
    // L.erase(unique(L.begin(), L.end()), L.end());
    int size = L.size();
    for(int i = 0; i < size-2; i++) {
        for(int j = i+1; j < size - 1; j++) {
            for(int k = j+1; k < size; k++) {
                if(L[i] != L[j] && L[j] != L[k] && L[k] != L[i] && L[i] + L[j] > L[k] && L[j] + L[k] > L[i] &&
                   L[k] + L[i] > L[j]) {
                    count++;
                }
            }
        }
            
    }
    cout << count << endl;
    return 0;
}