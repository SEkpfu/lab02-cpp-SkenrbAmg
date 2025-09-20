//task 6
using namespace std;
#include <iostream>
int main() {
  setlocale(0, "");
  int x;
  cout << "Enter your rating: ";
  cin >> x;
  switch (x) {
  case 5: cout << "Great"; break;
  case 4: cout << "Fine";
  case 3: cout << "Satisfactorily"; break;
  case 2:
  case 1: cout << "Badly "; break;
  default: cout << "Incorrect data";
  }
  return 0;
}