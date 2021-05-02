#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<pair<int, int>> baggage(N);
  for(int i = 0; i < N; ++i) cin >> baggage[i].second >> baggage[i].first;
  sort(baggage.begin(), baggage.end());
  reverse(baggage.begin(), baggage.end());
  vector<int> box(M);
  for(int i = 0; i < M; ++i) cin >> box[i];
  for(int i = 0; i < Q; ++i) {
    int L, R;
    cin >> L >> R;
    vector<int> canUseBox = box;
    vector<pair<int,int>> copyBaggage = baggage;
    canUseBox.erase(canUseBox.begin() + L - 1, canUseBox.begin() + R);
    sort(canUseBox.begin(), canUseBox.end());
    int value = 0;
    int boxSize = canUseBox.size();
    for(int j = 0; j < boxSize; ++j) {
      int baggageSize = copyBaggage.size();
      for(int k = 0; k < baggageSize; ++k) {
        if(canUseBox[j] >= copyBaggage[k].second) {
          value += copyBaggage[k].first;
          copyBaggage.erase(copyBaggage.begin() + k);
          break;
        }
      }
    }
    cout << value << endl;
  }
  return 0;
}
