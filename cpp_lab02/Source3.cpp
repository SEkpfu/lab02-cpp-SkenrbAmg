//task 1c (2)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
  setlocale(0, "");
  double a1, b1, a2, b2, a3, b3;
  cout << "1 rectangle \n";
  cout << "a1= ";
  cin >> a1;
  cout << "b1= ";
  cin >> b1;
  cout << "2 rectangle \n";
  cout << "a2= ";
  cin >> a2;
  cout << "b2= ";
  cin >> b2;
  cout << "2 rectangle \n";
  cout << "a3= ";
  cin >> a3;
  cout << "b3= ";
  cin >> b3;

  double s1, s2, s3, x, a;
  s1 = a1 * b1;
  s2 = a2 * b2;
  s3 = a3 * b3;
  x = s1;
  id = 1;
  s2 > x ? (x = s2) && (a = 2) : x = x;
  s3 > x ? (x = s3) && (a = 3) : x = x;
  cout << "max S" << a << " = " << x;
  return 0;
}