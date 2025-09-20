//task 12d
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
    if (a == min(a, b, c)) {
        cout << "Min id = 1";
    }
    if (b == min(a, b, c)) {
        cout << "Min id = 2";
    }
    if (c == min(a, b, c)) {
        cout << "Min id = 3";

        return 0;
    }