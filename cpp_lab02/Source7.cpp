//task 3b
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
    cout << "f(x) = " << f;
  }
  else if (x == 1) {
    cout << "non-numeric result";
  }
  else if ((x > 0) && (x != 1)) {
    f = 1 / (x * x + 4 * x - 5);
    cout << "f(x) = " << f;
  }
  else {
    f = x * x + 4 * x + 5;
    cout << "f(x) = " << f;
  }
  return 0;
}