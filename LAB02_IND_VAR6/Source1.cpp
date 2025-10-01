#include <iostream>
using namespace std;

int main() {
    int s;
    double len;

    cout << "¬ведите номер единицы длины (1-5): ";
    cin >> s;
    cout << "¬ведите длину отрезка: ";
    cin >> len;

    double a;
    switch (s) {
    case 1:
        a = len * 0.1;
        break;
    case 2:
        a = len * 1000;
        break;
    case 3:
        a = len;
        break;
    case 4:
        a = len * 0.001;
        break;
    case 5:
        a = len * 0.01;
        break;
    default:
        return 1;
    }
    cout << "ƒлина отрезка в метрах: " << a << " METERS" << endl;
    return 0;
}