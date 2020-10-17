#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> DecimalToBinary(int decimal)
{
    vector<int> bit(0);
    while (true)
    {
        bit.push_back(decimal % 2);
        decimal /= 2;
        if (decimal == 0)
        {
            break;
        }
    }
    //reverse(bit.begin(), bit.end());
    return bit;
}

int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> c(H, vector<char>(W, '.'));
    vector<int> row(H, 0);
    int black_count_sum = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == '#')
            {
                black_count_sum++;
                row[i]++;
            }
        }
    }
    cout << endl;
    vector<int> column(W, 0);
    for (int j = 0; j < W; j++)
    {
        for (int i = 0; i < H; i++)
        {
            cin >> c[i][j];
            if (c[i][j] == '#')
            {
                column[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < pow(2, H); i++)
    {
        for (int j = 0; j < pow(2, W); j++)
        {
            int black_count = 0;
            vector<int> bit_i = DecimalToBinary(i);
            vector<int> bit_j = DecimalToBinary(j);
            for (int r = 0; r < bit_i.size(); r++)
            {
                if (bit_i[r] == 1)
                {
                    black_count += row[r];
                    for (int col = 0; col < bit_j.size(); col++)
                    {
                        if (bit_j[col] == 1)
                        {
                            if (c[r][col] == '#')
                            {
                                black_count--;
                            }
                        }
                    }
                }
            }
            for (int c = 0; c < bit_j.size(); c++)
            {
                if (bit_j[c] == 1)
                {
                    black_count += column[c];
                }
            }

            if (black_count_sum - black_count == K)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}