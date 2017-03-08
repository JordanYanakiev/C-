/* Write a function that reverses the
 digits of given positive decimal number.
 Example: 256 > 652   */

#include <iostream>

using namespace std;

int mirror(int a)
{
    int b, c = 0, d, e, f, g;
    do
    {
        b = a%10;
        c = c*10 + b;
        a = a/10;
        b = 0;
    }
      while (a >> 0);
    return c;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout <<  "The reverse is: " << mirror (number) << endl;
 return 0;
}
