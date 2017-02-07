// DoWhileExercise.cpp : Defines the entry point for the console application.
/*  Write a program which calculates the multiplied numbers in the range from 
m to n, where m and n are real numbers. For the task use do/while cycle. */ 
//

#include "stdafx.h"
#include <math.h>
#include <iostream> 

using namespace std; 

int main()
{
	int m, n, m1, sum; 
	cout << "M = " ;
	cin >> m;
	cout << "N = " ;
	cin >> n; 
	int i = 1; 
	int m2;
	sum = m;
	do 
	{
		i = sum * i;
		sum++;
	}
	while (sum <= n); 
	cout << "sum = " << i << endl;
	return 0;
}

