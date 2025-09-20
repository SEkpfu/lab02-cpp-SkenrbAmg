//task 9c
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
  double x, y, q;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  q = sqrt(x * x + y * y);
  if (q <= 6 && x > 0 && q >= 3) {
    cout << "True";
  }
  else {
    cout << "False";
  }
  return 0;
}