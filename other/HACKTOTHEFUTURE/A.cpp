#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;
const int numberOfCards = 100;
const int squareWidth = 20;
const int squareHeight = 20;
const int maxMargin = 10;

string move(int dx, int dy, string route) {
    if(dx >= 0) {
        for(int i = 0; i < dx; ++i) {
            route.push_back('D');
        }
    } else {
        for(int i = dx; i < 0; ++i) {
            route.push_back('U');
        }
    }
    if(dy >= 0) {
        for(int i = 0; i < dy; ++i) {
            route.push_back('R');
        }
    } else {
        for(int i = dy; i < 0; ++i) {
            route.push_back('L');
        }
    }
    return route;
}

int main() {
    vector<int> originalX(numberOfCards), originalY(numberOfCards);
    vector<vector<bool>> originalExist(squareHeight,
                                       vector<bool>(squareWidth, false));
    vector<string> route(maxMargin + 1, "");
    for(int i = 0; i < numberOfCards; ++i) {
        cin >> originalX[i] >> originalY[i];
        originalExist[originalX[i]][originalY[i]] = true;
    }
    // それぞれの軸における現在位置と目標位置の距離
    int dx, dy;

    // 次のカード（目的地）まで向かう方法
    // 経路に次のカードより1大きいカードがあればそこまで移動し，拾う．そして，目的地により近い位置に置く準備をする（カードの座標を変更）
    // 現在位置と上で保存したカードの置き場所との間に，更に1大きいカードがあれば同様の処理を行う
    // 現在位置と上で保存したカードの置き場所との間に，更に1大きいカードが存在しなくなるまで繰り返す
    for(int margin = 0; margin <= maxMargin; ++margin) {
        vector<int> x = originalX, y = originalY;
        vector<vector<bool>> exist = originalExist;
        // 現在位置
        int positionX = 0, positionY = 0;
        for(int i = 0; i < numberOfCards; ++i) {
            int j = i + 1;
            // 経路に1大きいカードがあるか確認
            for(; j < numberOfCards; ++j) {
                int tmpMargin = margin;
                if(abs(x[i] - positionX) + abs(y[i] - positionY) <= 2) {
                    tmpMargin = 0;
                }
                // あればそこまで移動してそのカードを拾い，そのカードの座標を目的地に近い位置に変更する
                if(x[j] >= min(x[i], positionX) - tmpMargin &&
                   y[j] >= min(y[i], positionY) - tmpMargin &&
                   x[j] <= max(x[i], positionX) + tmpMargin &&
                   y[j] <= max(y[i], positionY) + tmpMargin) {
                    // 経路の変更
                    dx = x[j] - positionX;
                    dy = y[j] - positionY;
                    route[margin] = move(dx, dy, route[margin]);
                    // 現在位置の更新
                    positionX = x[j];
                    positionY = y[j];
                    route[margin].push_back('I');
                    // 1つ前のカードに近い位置に配置したい
                    int minX = min(x[j], x[j - 1]);
                    int maxX = max(x[j], x[j - 1]);
                    int minY = min(y[j], y[j - 1]);
                    int maxY = max(y[j], y[j - 1]);
                    int minDistance = 100;
                    for(int k = minX; k <= maxX; ++k) {
                        for(int l = minY; l <= maxY; ++l) {
                            if(!exist[k][l] &&
                               (abs(k - x[j - 1]) + abs(l - y[j - 1])) <
                                   minDistance) {
                                x[j] = k;
                                y[j] = l;
                                minDistance =
                                    abs(k - x[j - 1]) + abs(l - y[j - 1]);
                            }
                        }
                    }
                    exist[x[j]][y[j]] = true;
                } else {
                    break;
                }
            }
            j--;
            // 置いていく
            for(; j > i; --j) {
                // 経路の決定
                dx = x[j] - positionX;
                dy = y[j] - positionY;
                route[margin] = move(dx, dy, route[margin]);
                route[margin].push_back('O');
                // 現在位置の更新
                positionX = x[j];
                positionY = y[j];
            }

            // 目的地に行って拾う
            dx = x[i] - positionX;
            dy = y[i] - positionY;
            route[margin] = move(dx, dy, route[margin]);
            route[margin].push_back('I');
            positionX = x[i];
            positionY = y[i];
        }
    }
    int minCount = 4000;
    string answer;
    for(int margin = 0; margin <= maxMargin; ++margin) {
        int count = 0;
        for(auto c : route[margin]) {
            if(c != 'I' && c != 'O') {
                count++;
            }
        }
        if(count < minCount){
            minCount = count;
            answer = route[margin];
            // cout << margin << endl;
        }
    }
    cout << answer << endl;
    return 0;
}