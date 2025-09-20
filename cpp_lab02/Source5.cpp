//task 2
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>

int main() {
  int n;
  cout << "n = ";
  cin >> n;
  if (n > 0) {
    cout << "n > 0" << endl;
  }
  else if (n == 0) 
  {    cout << "n = 0" << endl;
  }
  else if (n < 0) {
    cout << "n < 0" << endl;
  }
  if ((n % 2) == 0) {
    cout << "chetnoe";
  }
  else {
    cout << "nechetoe";
  }
  return 0;
}
