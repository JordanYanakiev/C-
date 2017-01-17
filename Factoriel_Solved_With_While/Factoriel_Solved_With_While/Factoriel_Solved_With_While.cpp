// Factoriel_Solved_With_While.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int n; 
	cout << "N = ";
	cin >> n; 
	if (!cin)
	{
		cout << "Error! Bad input!" << endl;
		return 1;
	}

	double fact = 1; 
	int i = 1;

	while (i <= n)
	{
		fact = fact * i; 
		i++;

	}
	cout << "Factoriel of " << n << " is " << fact << endl;


	return 0;
}

