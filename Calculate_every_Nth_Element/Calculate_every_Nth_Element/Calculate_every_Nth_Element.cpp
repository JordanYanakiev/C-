// Calculate_every_Nth_Element.cpp : Defines the entry point for the console application.
// Solve the equation s = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!



#include "stdafx.h"
#include <iostream> 
#include <stdio.h>

using namespace std;


int main()
{
	double x;
	int n;
	cout << "x = ";
	cin >> x;

	// Display error if x is not number
	if (!cin)
	{
		cout << "Error! Bad input!" << endl;
		return 1;
	}

	cout << "n = "; 
	cin >> n;

	// Display error if n is not a number
	if (!cin)
	{
		cout << "Error! Bad input!" << endl;
		return 1;
	}

	// Display error if n is not greater than zero
	if (n <= 0 )
	{
		cout << "Error! Bad input! The N have to be greater than zero!" << endl;
		return 1;
	}

	// Display error if x is not equal to n
	if (x != n) 
	{
		cout << "Error! X must be equal to N!" << endl;
		return 1;
	}


	//Solve the equation s = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!
	double x1 = 1;
	double s = 1; 
	for (short i = 1; i <= n; i++)
	{
		x1 = x1*x; 
		double f = i*i;
		x1 = x1/i;
		s = s + x1;
	}

	cout << "s = " << s << endl;
	return 0;
}

