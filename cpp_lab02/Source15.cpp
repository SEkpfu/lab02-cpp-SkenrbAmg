#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//task 9b
int main() {
  double x, y, q;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  q = sqrt(x * x + y * y);
  if (q <= 5 && y > 0) {
    cout << "True";
  }
  else {
    cout << "False";
  }
  return 0;
}