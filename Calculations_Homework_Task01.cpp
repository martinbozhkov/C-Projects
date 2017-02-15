// Calculations_Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <iostream>
using namespace std;

int main()
{

	setlocale (LC_ALL, "bulgarian");

	//Task 01
	int a = 5;
	int b = 100;

	int c = a + b;
	cout << "The sum of the numbers 100 + 5 = " << c << "\n\n";

    return 0;
}

