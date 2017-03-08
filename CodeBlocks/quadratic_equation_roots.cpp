/* Write a program that enters the coefficients a, b and c
of a quadratic equation a*x2 + b*x + c = 0 and calculates
and prints its real roots. Note that quadratic equations
may have 0, 1 or 2 real roots. */
/* x1, x2 = (-b +/- sqrt(b*b - 4*a*c))/ 2*a */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 float a, b, c;
 float x1, x2, d;
 cout << "a = ";
 cin >> a;
 cout << "b = ";
 cin >> b;
 cout << "c = ";
 cin >> c;
 d = b*b - 4*a*c;
 x1 = (b*(-1) + sqrt(d))/ (2*a);
 x2 = (b*(-1) - sqrt(d))/ (2*a);
 cout << endl;
 if (d < 0)
    cout << "There are no real roots!" << endl;

 if (d == 0)
    cout << "The equation have one double root!" << endl;

 if (d > 0)
    cout << "There are two real roots!" << endl;
 cout << endl;
 cout << "x1 = " << x1 << endl;
 cout << "x2 = " << x2 << endl;
return 0;
}
