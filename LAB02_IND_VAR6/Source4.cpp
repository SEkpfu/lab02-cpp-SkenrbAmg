#include <iostream>
using namespace std;
int main() {
    system("chcp 1251 > nul");
    int n;
    cout << "������� ���������� ����: ";
    cin >> n;

    if (n % 10 == 1 && n % 100 != 11) {
        cout << "���� �������� � ���������� " << n << " YELKU";
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 > 20)) {
        cout << "���� �������� � ���������� " << n << " YELKI";
    }
    else {
        cout << "���� �������� � ���������� " << n << " YELOK";
    }

    return 0;