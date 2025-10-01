#include <iostream>
using namespace std;

int main(LC_ALL, "RUS") { // d- day, m - month, y - year 
    int bd, bm, by;
    int cd, cm, cy;

    cout << "¬ведите дату рождени€ (день мес€ц год): ";
    cin >> bd >> bm >> by;
    cout << "¬ведите текущую дату (день мес€ц год): ";
    cin >> cd >> cm >> cy;

    int age = cy - by

    //суффикс проверка
    string suffix;
    if (age % 10 == 1 && age % 100 != 11) {
        suffix = "год";
    }
    else if (age % 10 >= 2 && age % 10 <= 4 &&
        (age % 100 < 10 || age % 100 >= 20)) {
        suffix = "года";
    }
    else {
        suffix = "лет";
    }

    cout << "¬ам " << age << " " << suffix << endl;
    return 0;
}