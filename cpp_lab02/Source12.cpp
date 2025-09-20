//task 7
#include <iostream>
using namespace std;
int main() {
  double a, b;
  char c;
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c(+,-,*) = ";
  cin >> c;
  switch (c)
  {
  case '+': cout << "a + b = " << a + b; break;
  case '-': cout << "a - b = " << a - b; break;
  case '*': cout << "a * b = " << a * b; break;
  default: cout << "Incorrect data";
  }
  return 0;
}