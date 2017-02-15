// Calculations_Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <iostream>
using namespace std;

int main()
{

	setlocale (LC_ALL, "bulgarian");

	//Task 02
	int a = 3, b = 2, c = 100;
	int d = a & b;
	int f = a | b;
	int e = a ^ c;
	int d1 = 2 * (a++) + 3 * b + 1;

	cout << "The following data given: " << "\n\n";

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n\n";


	cout << "Bitwise operations &, |, ^"<< "\n\n";
	cout << "a & b = " << d << "\n";
	cout << "a | b = " << f << "\n";
	cout << "a ^ c = " << e << "\n";
	cout << "2 * (a++) + 3 * b + 1 = " << d1 << "\n\n\n";

    return 0;
}

