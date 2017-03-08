#include <iostream>

using namespace std;

int main()
{
 double a, b, c;
 cout << "a = ";
 cin >> a;
 cout << "b = ";
 cin >> b;
 cout << "c = ";
 cin >> c;
 cout << endl;
 if ((a < 0 && b > 0 && c > 0) ||(a > 0 && b < 0 && c > 0) || (a > 0 && b < 0 && c > 0)|| (a < 0 && b < 0 && c < 0))
 {
    cout << "The result would be negative!" << endl;
 }
 if ((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c > 0) || (a > 0 && b < 0 && c < 0) ||  (a < 0 && b > 0 && c < 0))
 {
    cout << "The result would be positive!" << endl;
 }
 if (a==0 || b==0 || c==0)
    cout << "The result would be equal to 0!" << endl;

 return 0;
}
