#include <stdio.h>
#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

int main()
{
	int weight, feet, inches;
	double bmi;
	cout << "Body Mass Index" << endl;
	cout << "Enter your height: " << endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;


	bmi =((weight * .45)/(((inches + feet * 12)*.025)*((inches + feet * 12)*.025)));

	cout << "Your BMI is: " << bmi << endl;
	if ( bmi >= 30 ) {
		cout << "Your BMI indicates that you are obese." << endl;

	}

	else if (bmi <= 18.5) {
		cout << "Your BMI indicates that you are underweight." << endl;

	}

	else if (18.5 < bmi < 24.9) {
		cout << "Your BMI indicates that you are normal weight." << endl;

	}
	else if (25 < bmi < 29.9) {
		cout << "Your BMI indicates that you are overweight." << endl;

	}
	system("PAUSE");
	return 0;
}