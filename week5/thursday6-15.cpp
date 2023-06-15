// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	
	*       1
	**      1 2
	***     1 2 3
	****    1 2 3 4
	
	****    1 2 3 4
	****    1 2 3 4
	****    1 2 3 4
	****    1 2 3 4

	/*
	Take 10 integers from keyboard using 
	loop and print their average value 
	on the screen.*/

	int counter = 1;
	int total = 0;
	while (counter < 11) {
		cout << "Enter a number: ";
		// input?
		int number;
		cin >> number;
		total += number;
		counter++;
	}
	// divide it, output...
	/*
	Print multiplication table of 24, 
	50 and 29 using loop.

	24 x 1
	24 x 2
	24 x 3
	24 x 4
	...
	24 x 10
	

	1x1 = 3
	1x2 = 2
	1x3 = 3

	
	psudocode???
	
	rows and columns?
	rows = inside?  outside?
	*/

	const int MULTIPLIER = 24;

	for (int i = 1; i <= 10; i++) {
		// cout << i << " ";
		cout << MULTIPLIER << " x " << i << " = " << MULTIPLIER *i;
	}
	// this prints 1 2 3
	// i want it to print
	// 1x1 = 1
	// 1x2 = 2
	// 1x3 = 3
	// now change it so that it does
	// 24 x 1 = 1
	// 24 x 2 = 48
	// 24 x 3 = ...?
	// ...
	// 24 x 10 = 240








	string names[3];
	names[0] = "Stan";
	names[1] = "Parick";
	names[2] = "Kira";

	cout << "6/15 Attendance bonus points: ";
	for (int i = 0; i < 3; i++) {
		cout << endl << names[i];
	}
	int num;

	int score1, score2, score3;

	const int SCORE_COUNT = 3;

	int scores[3];

	score1 = 90;
	scores[0] = 90;

	score2 = 95;
	scores[1] = 95;

	score3 = 99;
	scores[2] = 99;

	cin >> score1 >> score2 >> score3;

	for (int i = 0; i < SCORE_COUNT; i++) {
		do {
			cout << "Please enter a score: ";
			cin >> scores[i];
		} while (scores[i] < 0);
	}

	cout << "\nAvg is: " << (score1 + score2 + score3) / 3.0;

	int total = 0;
	for (int i = 0; i < SCORE_COUNT; i++) {
		total += scores[i];
	}
	cout << "\nAvg is: " << static_cast<double>(total) / SCORE_COUNT;


	const int ROW_MAX = 10;
	const int COL_MAX = 10;
	const int NUM_WIDTH = 4;
	int row, col;
	//cout << "   1 2 3\n";
	cout << setw(NUM_WIDTH) << "";
	for (int i = 1; i <= COL_MAX; i++) {
		cout << setw(NUM_WIDTH) << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= (COL_MAX+3) * NUM_WIDTH; i++) {
		cout << "-";
	}
	cout << "\n";
	for (row = 1; row <= ROW_MAX; row++) {  //outer
		cout << setw(NUM_WIDTH-2) << row << "| ";
		for (col = 1; col <= COL_MAX; col++) { //inner
			cout << setw(NUM_WIDTH) << row * col << " ";
		}
		cout << endl;
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
