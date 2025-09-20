//task 10ab
#include <iostream>
#include <cmath>
using namespace std;

int main(LC_ALL, "RUS") {
    double x, y, z;
    cout << "Введите три положительных числа: ";
    cin >> x >> y >> z;

    
    if (x + y > z && x + z > y && y + z > x) {
        cout << "Треугольник существует." << endl;

        
        if (x == y && y == z) {
            cout << "Треугольник равносторонний." << endl;
        }
        
        else if (x == y  x == z  y == z) {
            cout << "Треугольник равнобедренный." << endl;
        }

        // ???? -  поискать как проверить на прямоугол треуг.
            //cout << "Треугольник прямоугольный." << endl;
        }
    }
    else {
        cout << "Треугольник не существует." << endl;
    }
    return 0;
}