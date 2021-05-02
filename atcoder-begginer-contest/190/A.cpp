#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    if(A > B) cout << "Takahashi" << endl;
    else if(B > A)
        cout << "Aoki" << endl;
        else{
            if(C == 0) cout << "Aoki" << endl;
            else
                cout << "Takahashi" << endl;
        }
    return 0;
}