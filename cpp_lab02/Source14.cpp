//task 9a
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
  if ((-2 <= x && x <= 0) && (0 <= y && y <= 1)) {
    cout << "True";
  }
  else {
    cout << "False";
  }
  return 0;
}

