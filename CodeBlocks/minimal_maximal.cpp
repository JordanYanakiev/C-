/* Write a program that reads from
the console a sequence
of N integer numbers and returns
the minimal and maximal of them */

#include <iostream>

using namespace std;

int main ()
{
 int n, k, _min=0, _max=0;
 cout << "N = ";
 cin >> n;
 for (int i=1; i<=n; i++)
 {
     cin >> k;
     if (i==1)
     {
      _min = k;
      _max = k;
     }
     if (_min > k)
     {
         _min = k;
     }
      if (_max < k)
     {
         _max = k;
     }
 }
 cout << _min << " " << _max << endl;
 return 0;
}
