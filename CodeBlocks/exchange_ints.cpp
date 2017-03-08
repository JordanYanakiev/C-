/* Write a conditional statement that examines
two integer variables and exchanges their values
if the first one is greater than the second one */

#include <iostream>

using namespace std;

int main ()
{
 int a, b, c;
 cout << "a = ";
 cin >> a;
 cout << "b = ";
 cin >> b;
 if (a >> b)
 {
     c = a;
     a = b;
     b = c;
 }
  cout << "After comparison: " << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
 return 0;
}
