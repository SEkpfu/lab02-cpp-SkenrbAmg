//task 12a
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, s = 0, ch = 0;
    cout << "1) a = ";
    cin >> a;
    cout << "2) b = ";
    cin >> b;
    cout << "3) c = ";
    cin >> c;
    if (a > 10) {
        s = s + a;
    }
    if (b > 10) {
        s = s + a;
    }
    if (c > 10) {
        s = s + a;
    }
    cout << "Sum(>10) = " << s << endl;
    return 0;
}