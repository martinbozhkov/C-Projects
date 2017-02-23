// Square Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
	//Task 01
	for (int i = 1; i >= 1 && i <= 15; i++)
	{
		float square = i * i;

		if (square < 100) {

			cout << "The square of " << i << " is:	" << square << endl;
		}
		else {
			cout << "The square of " << i << " is:	" << square << endl;
		}
	}

	cout << "\n\n";
	*/

	/*
	//Task 02
	int d1 = 0;

	for (int i = 1; i >= 1 && i <= 20; i++)
	{
		int i1 = i;
		int n = --i1;
		i1++;

		int d = n;
		d1 += d;

		cout << "Number: " << i << ";	" << "The Sum of the last Numbers is:	" << d1 << endl;

		i = i1;
	}

	cout << "\n\n";
	*/

	/*
	//Task 03
	float numbers[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Please input a number and press ENTER: ";
		cin >> numbers [i];

	}

	int a1 = numbers[0];
	int a2 = numbers[1];
	int a3 = numbers[2];
	int a4 = numbers[3];
	int a5 = numbers[4];

	int result = a1 * a2 * a3 * a4 * a5;

	cout << "\n\nThe product *in Math* of the entered numbers is: " << result << "\n\n\n";
	*/

	//Task 04
	int numbers[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Please input a number and press ENTER: ";
		cin >> numbers[i];
	}

	int a1 = numbers[0];
	int a2 = numbers[1];
	int a3 = numbers[2];
	int a4 = numbers[3];
	int a5 = numbers[4];

	for (int i = 0; i<5; ++i)
	{
		int min = i;
		for (int j = i; j < 5; ++j) {
			if (numbers[min] > numbers[j])
				min = j;

			swap(numbers[min], numbers[i]);
		}

		if (numbers[i] % 2 == 0) {

			cout << "\n\nThe least even number is: " << numbers[i];
			break;
		}

		if (i == 4 && numbers[i] % 2 == 1) {
			cout << "\n\nThere is no even numbers!";
		}
	}

	cout << "\n\nThe least entered number is: " << numbers[0];
	cout << "\n\nThe biggest entered number is: " << numbers[4];

	cout << "\n\n\n\n";

    return 0;
}

