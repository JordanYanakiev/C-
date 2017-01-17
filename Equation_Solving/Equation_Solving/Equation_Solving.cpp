// Equation_Solving.cpp : Defines the entry point for the console application.;
// Find the ammount of numbers multiple for m from the equation ;
// i^3+7*i^2+n^3 where n => 1 and m > 1;

#include "stdafx.h"
#include <math.h>
#include <iostream> 

using namespace std;

int main()
{
	int n; 
	cout << "Enter N = " ;
	cin >> n;
	if (!cin) 
	{
		cout << "Error! Bad Input!" << endl;
		return 1;
	}
	
	int m; 
	cout << "Enter m = "; 
	cin >> m; 
	if (!cin) 
	{
		cout << "Error! Bad Input!" << endl;
		return 1;
	}
	if (m < 1) 
		{
		cout << "Error! Bad Input! M need's to be greater than 1!" << endl;
		return 1;
	}

	int br = 0;
	for (int i = 1; i <= n; i++)
	{
	   if ((i*i*i+7*i*i+n*n*n) % m == 0)
		   br++;
	}
	cout << "The ammount of numers multiple for m is: " << br << endl;

	return 0;
}

