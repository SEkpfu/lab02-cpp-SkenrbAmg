//task 10ab
#include <iostream>
#include <cmath>
using namespace std;

int main(LC_ALL, "RUS") {
    double x, y, z;
    cout << "������� ��� ������������� �����: ";
    cin >> x >> y >> z;

    
    if (x + y > z && x + z > y && y + z > x) {
        cout << "����������� ����������." << endl;

        
        if (x == y && y == z) {
            cout << "����������� ��������������." << endl;
        }
        
        else if (x == y  x == z  y == z) {
            cout << "����������� ��������������." << endl;
        }

        // ???? -  �������� ��� ��������� �� ��������� �����.
            //cout << "����������� �������������." << endl;
        }
    }
    else {
        cout << "����������� �� ����������." << endl;
    }
    return 0;
}