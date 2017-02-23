// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

float grades[5];

//Structure of Student's Data
struct studentData {
	char name[20];
	int years;
	int course;
	float uspeh;
	studentData() {

		for (int i = 0; i < 20; i++) {
			name[i] = 0;
		}
		course = 1;
		years = 0;
		uspeh = 0.0;
	}
	struct sGrades {
		float Math;
		float IT;
		float Geography;
		float Chemistry;
		float Sport;
	}subjects;

	//Print function
	void print(){
		cout << "\n\nSTUDENT'S DATA" << endl;
		cout << "_________________________" << endl;
		cout << "\nName: " << student.name;
		cout << "\nAges: " << student.years;
		cout << "\nCourse: " << student.course;
		average();
		cout << "\nSreden uspeh: " << student.uspeh;
		cout << "\n_________________________" << endl;
	}

	//Sort function
	void sort() {

		//Save the inputted values
		float x1, x2, x3, x4, x5 = 0;

		x1 = grades[0];
		x2 = grades[1];
		x3 = grades[2];
		x4 = grades[3];
		x5 = grades[4];
		
		//Sort the grades
		for (int i = 1; i<5; i++)
		{
			float index = grades[i];
			int n = i;
			while (n>0 && grades[n - 1] >= index)
			{
				grades[n] = grades[n - 1];
				--n;
			}
			grades[n] = index;
		}
		cout << "\n\nThe least grade of the Student is: " << grades[0];
		cout << "\n\nThe biggest grade of the Student is: " << grades[4];

		//Grade comparison
		int n = 0;
		cout << "\n\n\nPlease input a grade from 2 to 6: ";
		cin >> n;

		cout << "\n\nSubjects with grade less than the entered above:";

		if (x1 < n)
		{
			cout << " Math; ";
		}

		if (x2 < n) {
			cout << " IT; ";
		}

		if (x3 < n) {
			cout << " Geography; ";
		}

		if (x4 < n) {
			cout << " Chemistry; ";
		}

		if (x5 < n) {
			cout << " Sport; ";
		}		
	}

	//Sreden uspeh Function
	void average()
	{
		student.subjects.Math = grades[0];
		student.subjects.IT = grades[1];
		student.subjects.Geography = grades[2];
		student.subjects.Chemistry = grades[3];
		student.subjects.Sport = grades[4];

		student.uspeh = (student.subjects.Math + student.subjects.IT + student.subjects.Geography + student.subjects.Chemistry + student.subjects.Sport) / 5;
	}
}student;

int main()
{
	//User input the datas
	cout << "Input the Name of the student: ";
	cin.get(student.name, 20);

	cout << "Input the Ages of the student: ";
	cin >> student.years;

	cout << "Input the student Course: ";
	cin >> student.course;
	cout << "\n";

	int z = 0;
	string text[5];

	string a1 = "Math", a2 = "IT", a3 = "Geography", a4 = "Chemistry", a5 = "Sport";

	text[0] = a1;
	text[1] = a2;
	text[2] = a3;
	text[3] = a4;
	text[4] = a5;

	for (int i = 0, z = 0; i < 5; i++, z++) {
		
		if (i == 0 || i == 1 || i == 4) {
			cout << "Input the " << text[z] << " grade of the student:		";
			cin >> grades[i];
		}

		if (i == 2 || i == 3) {
			cout << "Input the " << text[z] << " grade of the student:	";
			cin >> grades[i];
		}
	}	

	student.average();

	student.print();

	student.sort();

	cout << "\n\n\n";
	
    return 0;
}





