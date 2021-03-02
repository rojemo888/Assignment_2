#include <stdio.h>
#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

void BMI()
{

	int weight, feet, inches;
	double bmi;
	cout << "Body Mass Index" << endl;
	cout << endl;
	cout << "Enter your height: " << endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;


	bmi = ((weight * .45) / (((inches + feet * 12)*.025)*((inches + feet * 12)*.025)));

	cout << "Your BMI is: " << bmi << endl;
	if (bmi >= 30) {
		cout << "Your BMI indicates that you are obese." << endl;
		cout << endl;
	}

	else if (bmi <= 18.5) {
		cout << "Your BMI indicates that you are underweight." << endl;
		cout << endl;
	}

	else if (18.5 < bmi < 24.9) {
		cout << "Your BMI indicates that you are normal weight." << endl;
		cout << endl;
	}
	else if (25 < bmi < 29.9) {
		cout << "Your BMI indicates that you are overweight." << endl;
		cout << endl;
	}
}

void savings_goal()
{
	int age, goal;
	double salary, savings_goal, perc_saved;

	cout << "Savings Goal" << endl;

	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your current salary: ";
	cin >> salary;
	cout << "Enter your percentage saved (in decimals): ";
	cin >> perc_saved;
	cout << "Enter your savings goal: ";
	cin >> savings_goal;

	int spy, ytg;


	spy = (salary*perc_saved) * 1.35;
	ytg = (savings_goal / spy);
	goal = age + ytg;


	if (goal > 100) {
		cout << "Your goal cannot be met." << endl;
	}
	else {
		cout << "You will be " << goal << " by the time you reach your savins goal." << endl;
	}

}

int main()
{
	int choice;

	do
	{
		cout << "Choose the function you wish to use (0, 1, or 2) and press enter." << endl;
		cout << "0. BMI" << endl << "1. Savings Goal" << endl << "2. Quit\n";
		cin >> choice;

		switch (choice)
		{
		case 0:
			BMI();
			break;
		case 1:
			savings_goal();
			break;
		case 2:
			return 0;
		}
	} while (choice != 2);
	


	system("PAUSE");
}