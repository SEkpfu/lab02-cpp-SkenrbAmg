#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double x, y;
    // ниж права
    cout << "введите координаты точки" << endl;
    cout << "WRITE X="; cin >> x;
    cout << "WRITE Y="; cin >> y;
    if (x * x + y * y <= 100 && y >= 0 && y < 5) {
        cout << "BNYTRI" << endl;
    }
    else if (y >= -5 && x <= 10 && y <= 0 && x >= 0) {
        cout << "BNYTRI" << endl;
    }
    else if (y <= 0 && x <= 0 && y >= (-x / 2 - 5)) {
        cout << "BNYTRI" << endl;
    }
    else cout << "NE BNYTRI";
    return 0;
}