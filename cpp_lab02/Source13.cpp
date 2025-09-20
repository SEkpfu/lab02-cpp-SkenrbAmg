//task 8
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
  double x, y, q;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  q = sqrt(x * x + y * y);
  if (q <= 2) {
    cout << "10 points";
  }
  else if (q <= 4 && q > 2) {
    cout << "5 points";
  }
  else {
    cout << "0 points";
  }
  return 0;
}