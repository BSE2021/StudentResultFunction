// StudentResultFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void check_grade(float mark); //prototype because the function is defined after the main 

int main()
{
	float grade;
	cout << "Enter the grade: ";
	cin >> grade;
	check_grade(grade); //function call with the parameter
}

//needs prototype because this function is after the main
void check_grade(float mark) {
	if (mark < 50)
		cout << "\n Sorry, the student has failed in the examination";
	else
		cout << "\n Congratulations! the student has passed the examination";
}