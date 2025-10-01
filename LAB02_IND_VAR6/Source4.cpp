#include <iostream>
using namespace std;
int main() {
    system("chcp 1251 > nul");
    int n;
    cout << "Введите количество ёлок: ";
    cin >> n;

    if (n % 10 == 1 && n % 100 != 11) {
        cout << "Коты нарядили и опрокинули " << n << " YELKU";
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n % 100 < 10 || n % 100 > 20)) {
        cout << "Коты нарядили и опрокинули " << n << " YELKI";
    }
    else {
        cout << "Коты нарядили и опрокинули " << n << " YELOK";
    }

    return 0;