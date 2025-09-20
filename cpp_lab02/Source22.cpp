//task 12c
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
    if ((a != max(a, b, c)) && (a != min(a, b, c))) {
        cout << "Srednee = " << a << endl;
    }
    if ((b != max(a, b, c)) && (b != min(a, b, c))) {
        cout << "Srednee = " << b << endl;
    }
    if ((c != max(a, b, c)) && (c != min(a, b, c))) {
        cout << "Srednee = " << c << endl;
        return 0;
    }