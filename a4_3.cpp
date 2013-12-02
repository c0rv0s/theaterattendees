#include <iostream>
#include "conio.h"
using namespace std;

int main()
{

	int firstcat = 0;		//These integers store the number of attendees
	int secondcat = 0;		//in each age category.
	int thirdcat = 0;
	int fourthcat = 0;
	int fifthcat = 0;

	int youngest = 1000000;		//Used to find the oldest, youngest, and average.
	int oldest = 0;
	int average = 0;

	int count = 0;			//number of entries
	int age = 0;		//each age entry

	char gender;
	int men = 0;
	int women = 0;

	while (age >= 0) {
		cout << "Enter age of attendee (negative number to quit): ";
		cin >> age;

		if (age < 0)	//break the loop so the negative value isn't counted 
			break;

		cout << "Enter gender (M or F): ";
		cin >> gender;

		if (gender == 'm' || gender == 'M')
			men++;
		else if (gender == 'f' || gender == 'F')
			women++;

		if (age >= 0 && age <= 18)		//increase the appropriate age category
			firstcat++;
		if (age >= 19 && age <= 30)
			secondcat++;
		if (age >= 31 && age <= 40)
			thirdcat++;
		if (age >= 41 && age <= 60)
			fourthcat++;
		if (age >= 61 && age <= 999999)
			fifthcat++;

		if (age < youngest && age > -1)		//determine if its the youngest attendee
			youngest = age;
		if (age > oldest )			//determine if its the oldest attendee
			oldest = age;

		average+=age;
		count++;
		
	}

	if (count == 0)											//The first value entered
		cout << "Sorry, you didn't enter any values!";		//was a negative number. 

	else {
		cout << endl << "age 0  to 18: " << firstcat << endl;
		cout << "age 19 to 30: " << secondcat << endl;
		cout << "age 31 to 40: " << thirdcat << endl;
		cout << "age 41 to 60: " << fourthcat << endl;
		cout << "age over 60: " << fifthcat << endl << endl;

		cout << "males: " << men << endl;
		cout << "females: " << women << endl;
		cout << "The average age was " << average / count << endl << ".";
		cout << "The youngest person in attendance was " << youngest << endl << ".";
		cout << "The oldest person in attendance was " << oldest << endl << ".";
	}
	
	_getch();
}
