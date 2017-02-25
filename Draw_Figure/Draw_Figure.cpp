// Draw_Figure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int main()
{
	int i, n, k, l; 
	// Figure 1
	 for (i=1; i<=5; i++)
	{
		for (k=1; k<=i; k++)
		{
			cout <<" " << k;
		}
		cout << "\n";
	} 
	 cout << "\n";
    // Figure 2
	for (i=5; i>=1; i--)
	{
		do
		{
			for (k=i; k>=1; k--)
			cout <<" " << k ;
			k--;
		}
		while (k == 1); 
		 cout << "\n";  
	}
	return 0;
}

