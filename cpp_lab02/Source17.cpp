//task 9d
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
  double x, y;
  cout << "x = ";
  cin >> x;
  cout << "y = ";
  cin >> y;
  if (x >= 0 && y >= 0 && y <=  (- 2 * x + 2)) {
    cout << "True";
  }
  else {
    cout << "False";
  }
}