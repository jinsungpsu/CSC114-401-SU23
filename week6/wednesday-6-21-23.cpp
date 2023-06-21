#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	/*
	Lottery assignment
	Starter code
	*/
	// seeding the random number generator
	// so it's actually random
	// you can take this out if you want
	// to make your random numbers
	// predictable for testing purposes...
	// srand((unsigned) time(NULL));

	int lottery[5];
	int user[5];

	for (int i = 0; i < 5; i++) {
		lottery[i] = rand()%10;
	}

	cout << "\nThe lottery numbers are: ";
	for (int each : lottery) {
		cout << each << " ";
	}
	cout << "\n";

	// bad algorithm (for averaging array contents)
	const int NUM_SCORES = 10;
	int scores[NUM_SCORES] = { 90, 95, 100, 50, 45, 99, 86, 75, 98, 70 };

	// finding the best score
	int bestScore = scores[0]; // assume first one is best

	for (int i = 1; i < NUM_SCORES; i++) {
		if (scores[i] > bestScore) {
			bestScore = scores[i];
		}
	}

	cout << "\nThe highest score was: " << bestScore;


	int total = 0;
	double avg;

	for (int i = 0; i < NUM_SCORES; i++) {
		total += scores[i];
	}
	avg = static_cast<double>(total) / NUM_SCORES;


	cout << "\nThe average of those tests scores is: ";


	string csc114students[] = {"Cameron", "Kira", "Patrick", "Stan"};

	cout << "The students who attended Wednesday are: \n";
	for (int i = 0; i < 4; i++) {
		cout << "Student #" << i+1 << ": " << csc114students[i] << endl;
		//csc114students[i] = "blank";
	}

	cout << "\n\nStudents using ranged based for loop: \n";
	for (string csc114student : csc114students) {
		cout << csc114student << endl;
		//csc114student = "blank";
	}

	cout << "\n\nStudents using ranged based for loop 2nd time: \n";
	for (string csc114student : csc114students) {
		cout << csc114student << endl;
	}


	cout << "\n\nStudents using ranged based for loop 3rd time: \n";\
	for (string each : csc114students) {
		cout << each << endl;
	}

	string csc164students[4];

	// this doesn't work!
	// csc164students = csc114students;

	// have to manually copy each item
	for (int i = 0; i < 4; i++) {
		csc164students[i] = csc114students[i];
	}


	// this won't work!
	// bc the range variable is a temporary storage location
	// where the array item is copied during each
	// iteration of the loop
	for (string csc164student : csc164students) {
		cout << "\n\nEnter student name: ";
		cin >> csc164student;
	}

	cout << "\n\nAll CSC164 students are: ";
	for (string csc164student : csc164students) {
		cout << csc164student << " ";
	}

	// this will work!
	// the range variable is a temporary storage location
	// where the array item ADDRESS (or reference)
	// is copied during each
	// iteration of the loop
	for (string& csc164student : csc164students) {
		cout << "\n\nEnter student name: ";
		cin >> csc164student;
	}

	int studentNum = 1;
	cout << "\n\nAfter we've gotten the input using a reference variable, all CSC164 students are: ";
	for (string csc164student : csc164students) {
		cout << "Student #" << studentNum++ << ": " << csc164student << " ";
	}





}
