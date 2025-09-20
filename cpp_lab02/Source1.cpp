#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>


using namespace std;
int main()
{
  setlocale(0, "");
  double a1, b1, a2, b2;
  cout << "1 rectangle \n";
  cout << "a1= "; cin >> a1;
  cout << "b1= "; cin >> b1;
  cout << "2 rectangle \n";
  cout << "a2= "; cin >> a2;
  cout << "b2= "; cin >> b2;

  double s1, s2;
  s1 = a1 * b1;
  s2 = a2 * b2;
  if (s1 >= s2) {
    cout << " max S 1, S= " << s1 << endl;
    if (s1 == s2) {
      cout << " s1 = s2 ";
    }
  }
  else {
    cout << " max S 2, S= " << s2 << endl;
    if (s1 == s2) {
      cout << " s1 = s2 ";
    }
  }
  return 0;
}
