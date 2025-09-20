//task 4b
 #define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
  setlocale(0, "");
  int dM, dW;
  cout << "Enter date: " << endl;
  cout << "Day of the month(1-31): ";
  cin >> dM;
  cout << "Day number of the week(1-7): ";
  cin >> dW;

  //using if
  if (13 == dM)
    if (5 == dW)
      cout << "bad day ";
    else
      if (2 == dW)
        cout << "bad day ";
  if (17 == dM)
    if (5 == dW)
      cout << "bad day ";
  
  //using only 
   //operation OR - 
  if (13 == dM)
    if (5 == dW  2 == dW)
      cout << "bad day ";
  if (17 == dM)
    if (5 == dW)
      cout << "bad day ";
  
  //using && and 
   //operation AND - &&
  if (((13 == dM) && (5 == dW  2 == dW))  (17 == dM && 5 == dW))
    cout << "bad day ";
  return 0;
}