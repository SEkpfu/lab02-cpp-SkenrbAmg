//task 3a
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>

int main() {
  double x, f;
  cout << "x = ";
  cin >> x;
  if (x <= -2) {
    f = 0;
  }
  else if (x > 10) {
    f = 1 / (x * x + 4 * x - 5);
  }
  else {
    f = x * x + 4 * x + 5;
  }
  cout << "f(x) = " << f;
  return 0;
}