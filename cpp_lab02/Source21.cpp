//task 12b
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
    if (a / 2 == 0) {
        ch = ch + 1;
    }
    if (b / 2 == 0) {
        ch = ch + 1;
    }
    if (c / 2 == 0) {
        ch = ch + 1;
    }
    cout << "Chetn = " << ch << endl;