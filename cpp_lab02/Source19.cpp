#include <iostream>
using namespace std;

int main(LC_ALL, "RUS") { // d- day, m - month, y - year 
    int bd, bm, by;
    int cd, cm, cy;

    cout << "������� ���� �������� (���� ����� ���): ";
    cin >> bd >> bm >> by;
    cout << "������� ������� ���� (���� ����� ���): ";
    cin >> cd >> cm >> cy;

    int age = cy - by

    //������� ��������
    string suffix;
    if (age % 10 == 1 && age % 100 != 11) {
        suffix = "���";
    }
    else if (age % 10 >= 2 && age % 10 <= 4 &&
        (age % 100 < 10 || age % 100 >= 20)) {
        suffix = "����";
    }
    else {
        suffix = "���";
    }

    cout << "��� " << age << " " << suffix << endl;
    return 0;
}