//task 5a
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main(LC_ALL, "RUS") {
  double r, z, a, b, c;
  cout << "RAD OF CAKE: ";
  cin >> r;
  cout << "Height of cake: ";
  cin >> z;
  cout << "Sides of the box: " << endl;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;
  if ((2 * r <= a) && (2 * r <= b) && (z <= c)) {
    cout << "The cake will fit";
  }
  else {
    cout << "The cake won't fit";
  }
  return 0;
}