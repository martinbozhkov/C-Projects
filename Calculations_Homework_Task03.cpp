// Calculations_Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <iostream>
using namespace std;

int main()
{

	setlocale (LC_ALL, "bulgarian");

	//Task 03
	int numbers[5];
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	
	cout << "Input 1st number and press ENTER: ";
	cin >> a;
	cout << "\nInput 2nd number and press ENTER: ";
	cin >> b;	
	cout << "\nInput 3rd number and press ENTER: ";
	cin >> c;	
	cout << "\nInput 4th number and press ENTER: ";
	cin >> d;	
	cout << "\nInput 5th number and press ENTER: ";
	cin >> e;

	numbers[0] = a;
	numbers[1] = b;
	numbers[2] = c;
	numbers[3] = d;
	numbers[4] = e;

	cout << "\n\nThe entered numbers are: ";

	for (int i = 0; i <= 4; i++)
	{
		cout << numbers[i] << "; ";
	}

	int sum = a + b + c + d + e;
	int avrg = sum / 5;

	cout << "\n\nThe sum of the numbers entered is: " << sum;
	cout << "\n\nThe average of the numbers entered is: " << avrg;
	cout << "\n\nAll even numbers are: ";
	
	for (int test = 0; test <= 4; test++)
	{
		if ( numbers[test] % 2 == 0 ) {

			cout << numbers[test] << "; ";

		}
	}

	cout << "\n\nAll odd numbers are: ";

	for (int test1 = 0; test1 <= 4; test1++)
	{
		if (numbers[test1] % 2 == 1) {

			cout << numbers[test1] << "; ";
		}
	}

	double db1 = 0;
	double db2 = 0;

	cout << "\n\nInput 1st decimal number and press ENTER: ";
	cin >> db1;
	cout << "\nInput 2nd decimal number and press ENTER: ";
	cin >> db2;

	double result = db1 * db2;

	cout << "\n\nThe multiplication of the decimal numbers = " << result;

	cout << "\n\n\n";

    return 0;
}

