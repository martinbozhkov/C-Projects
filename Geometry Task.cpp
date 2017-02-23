// Geometry Task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct point {
	//Promenlivi za koordinati
	float x;
	float y;
}point;

struct line {
	float m1; //Start point abs.
	float n1; //Start point ord.
	float m2; //End point abs.
	float n2; //End point ord.
}line;

struct square {

	//Duljina na stranata na kvadrata
	float a;

}square;

struct inputPoint {
	//Coordinates of a test Point
	float x1; 
	float y1;
}inputPoint;

void input() {

	//Enter the coordinates
	cout << "Input coordinates of a point (x; y), separated with SPACE: ";
	cin >> point.x >> point.y;

	cout << "\nInput a start point and an end point of a line: ";
	cin >> line.m1 >> line.n1 >> line.m2 >> line.n2;

	cout << "\nInput size of a side of the square: ";
	cin >> square.a;

	cout << "\n\nInput coordinates of a check point: ";
	cin >> inputPoint.x1 >> inputPoint.y1;
}

void calcs() {

	//Calculations
	float result = (((inputPoint.x1) + (inputPoint.y1) <= (square.a * 2)));

	if (result == true) {
		cout << "\n\nPoint is inside!";
	}
	else {
		cout << "\n\nPoint is outside!";
	}

	//p = x1 x x2 = [x1,y1,1] x [x2,y2,1]

	float clipping = ((line.m1) * (line.n1) <= (square.a * 4));

	if (clipping == true) {
		cout << "\n\nThe line crosses the square!";
	}
	else {
		cout << "\n\nThe line doesn't crosses the square!";
	}
}

int main()
{
	cout << "Please input the whole data separated with SPACE; After that press Enter!\n\n\n";

	input();
	calcs();

	cout << "\n\n\n";
    return 0;
}

