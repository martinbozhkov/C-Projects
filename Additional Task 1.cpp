// Additional Task 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "bulgarian");

	//Defining array and variables.

	int numbers[10];

	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, a10 = 0;

	cout << "INSTRUCTIONS: Enter 10 Integers.\n\n\n";

	//Cycle FOR, which prompts the user to enter 10 numbers.

	for (int n = 0; n < 10; n++) {

	cout << "Input a number and press ENTER: ";
	cin >> numbers[n];

	}

	//Setting up the values of variables of the respective values of the elements of the array.

	a1 = numbers[0];
	a2 = numbers[1];
	a3 = numbers[2];
	a4 = numbers[3];
	a5 = numbers[4];
	a6 = numbers[5];
	a7 = numbers[6];
	a8 = numbers[7];
	a9 = numbers[8];
	a10 = numbers[9];

	//Completing the arithmetic mean calculation.

	int result = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10) / 10;

	cout << "\n\nAverage of the entered numbers is: " << result ;

	//Sorting numbers in ascending order.

	cout << "\n\nSorted numbers in ascending order: ";

	for (int i = 0; i<10; ++i)
	{
		int min = i;
		for (int j = i; j<10; ++j)
			if (numbers[min]>numbers[j])
				min = j;

		swap(numbers[min], numbers[i]);
	}

	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << "; ";
	}

	//Sorting numbers in descending order.

	cout << "\n\nSorted numbers in descending order: ";

	for (int i = 0; i<10; ++i)
	{
		int max = i;
		for (int j = i; j<10; ++j)
			if (numbers[max]<numbers[j])
				max = j;

		swap(numbers[max], numbers[i]);
	}

	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << "; ";
	}

	cout << "\n\n\n";

    return 0;
}

