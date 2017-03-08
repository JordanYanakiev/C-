/*Write a program that prints all the numbers from 1 to N*/


#include <iostream>

using namespace std;

int main()
{
 int n;
 cout << "n = ";
 cin >> n;
 cout << endl;
  for (int i=1; i<=n; i++)
   {
     cout << i << " ";
   }
 cout << endl;
 return 0;
}
