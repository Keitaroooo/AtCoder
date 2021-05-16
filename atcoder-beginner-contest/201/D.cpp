#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> square_score(h, vector<int>(w, 1));
    for(int i = 0; i < h; ++i) {
        string s;
        cin >> s;
        for(int j = 0; j < w; ++j) {
            if(s[j] == '-') square_score[i][j] = -1;
        }
    }
    vector<vector<int>> difference_score(h, vector<int>(w));
    for(int i = h - 1; i >= 0; --i) {
        for(int j = w - 1; j >= 0; --j) {
            if((i + j) % 2 == 0) {
                if(i + 1 < h && j + 1 < w) {
                    difference_score[i][j] = max(
                        difference_score[i + 1][j] + square_score[i + 1][j],
                        difference_score[i][j + 1] + square_score[i][j + 1]);

                } else if(i + 1 >= h && j + 1 < w) {
                    difference_score[i][j] =
                        difference_score[i][j + 1] + square_score[i][j + 1];
                } else if(i + 1 < h && j + 1 >= w) {
                    difference_score[i][j] =
                        difference_score[i + 1][j] + square_score[i + 1][j];
                }
            } else {
                if(i + 1 < h && j + 1 < w) {
                    difference_score[i][j] = min(
                        difference_score[i + 1][j] - square_score[i + 1][j],
                        difference_score[i][j + 1] - square_score[i][j + 1]);

                } else if(i + 1 >= h && j + 1 < w) {
                    difference_score[i][j] =
                        difference_score[i][j + 1] - square_score[i][j + 1];
                } else if(i + 1 < h && j + 1 >= w) {
                    difference_score[i][j] =
                        difference_score[i + 1][j] - square_score[i + 1][j];
                }
            }
        }
    }
    if(difference_score[0][0] > 0) {
        cout << "Takahashi" << endl;
    } else if(difference_score[0][0] < 0) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}
