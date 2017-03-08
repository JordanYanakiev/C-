/* Write a program that calculates the greatest
 common divisor (GCD) of given two numbers.
 Use the Euclidean algorithm (find it in Internet)  */

#include <iostream>

using namespace std;

int main ()
{

int a, b, c, d, e;

cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
  do
   {
    c = a/b;
    d = c*b;
    e = a - d;
    a = b;
    b = e;
   }
    while (e > 0);
cout << endl;
cout << "============================" << endl;
cout << endl;
cout << "The greatest common divisor is: " << a << endl;

 return 0;
}
