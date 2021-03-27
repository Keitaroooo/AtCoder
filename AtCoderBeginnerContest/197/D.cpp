#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  int x0, y0, xN2, yN2;
  cin >> x0 >> y0 >> xN2 >> yN2;
  pair<double, double> center = {(x0 + xN2) / 2.0, (y0 + yN2) / 2.0};
  double radius = sqrt(pow(center.first - x0, 2) + pow(center.second - y0, 2));
  double direction =
      atan2(y0 - center.second, x0 - center.first) + 2 * M_PI / N;
  double x1 = center.first + radius * cos(direction);
  double y1 = center.second + radius * sin(direction);
  cout << fixed << setprecision(12) << x1 << " " << y1 << endl;
  return 0;
}

// int main() {
//   double N;
//   cin >> N;
//   double polygonAngle = (N - 2) * M_PI / N / 2.0;
//   double x0, y0, xN2, yN2;
//   cin >> x0 >> y0 >> xN2 >> yN2;
//   double side =
//       sqrt((pow(xN2 - x0, 2.0) + pow(yN2 - y0, 2.0))) * cos(polygonAngle);
//   double angle = atan((yN2 - y0) / (xN2 - x0));
//   cout << angle << endl;
//   double x1, y1;
//   angle -= polygonAngle;
//   x1 = x0 + cos(angle);
//   y1 = y0 + sin(angle);
//   cout << fixed << setprecision(10) << x1 << " " << y1 << endl;
//   return 0;
// }
