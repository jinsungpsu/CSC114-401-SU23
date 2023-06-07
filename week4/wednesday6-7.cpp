// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setprecision(2) << fixed << showpoint;

	float grade1, grade2, grade3;
	int numberTries = 1;
	cout << "Enter a grades: ";
	cin >> grade1;
	while (grade1 < 0 || grade1 > 100) {
		cout << "\nGrade must be between 0 and 100!\n";
		cout << "Try again: ";
		cin >> grade1;
		numberTries++;
		if (numberTries == 3) {
			cout << "\nReally bruh - you messed 3 times!";
			return 0;
		}
	}

	cout << "\nFor grade 1, you entered: " << grade1;


	cin >> grade2;

	cout << setprecision(4);

	cout << "\nGrade 2: " << grade2;
	cin >> grade3;

	double avg = (grade1 + grade2 + grade3) / 3;

	if (avg >= 90) {
		cout << "A";
	}
	else if (avg >= 80) {
		cout << "B";
	}
	else if (avg >= 70) {
		cout << "C";
	}
	else {
		cout << "F";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
