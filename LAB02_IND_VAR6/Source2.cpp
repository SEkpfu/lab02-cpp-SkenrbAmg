#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double x;
    const double sad = 3.1415;
    cout << "X=" << endl;
    cin >> x;

    if (x > -sad / 2 && x < sad / 2)
        cout << tan(sad * x) << endl;
    else if (x <= -sad / 2)
        cout << 1 / x < endl;
    else
        cout << sqrt(x * x * x - 1);
    return 0;

}