//task 5b
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    double q, w, x, y, z;
    cout << "Sides of the brick: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << "Sides of the hole: " << endl;
    cout << "q = ";
    cin >> q;
    cout << "w = ";
    cin >> w;
    double* brick = new double[3] { z, x, y };
    double* hole = new double[2] {q, w};
    sort(brick, brick + 3);
    sort(hole, hole + 2);
    if ((brick[0] <= hole[0]) && (brick[1] <= hole[1])) {
      cout << "The brick will pass";
    }
    else {
      cout << "A brick won't pass";
    }
    return 0;
  }