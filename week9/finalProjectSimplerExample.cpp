#include <iostream>
#include <fstream>
using namespace std;

void readFile(string fileName, int grades[3]);
void displayGrades(int grades[3]);
void writeFile(string fileName, int grades[3]);

int main() {
	int grades[3];
	string fileName = "gradesFile.txt";

	readFile(fileName, grades);
	displayGrades(grades);
	writeFile("outputFile.txt", grades);
}

void readFile(string fileName, int grades[3]) {
	ifstream file(fileName);
	if (file.is_open()) {
		// successfully opened the file
		for (int i = 0; i < 3; i++) {
			file >> grades[i];
		}
	}
	else {
		// file did not open
		cout << "uh oh...";
	}
	file.close();
}

void displayGrades(int grades[3]) {
	for (int i = 0; i < 3; i++) {
		cout << grades[i] << " ";
	}
}

void writeFile(string fileName, int grades[3]) {
	ofstream file(fileName);
	if (file.is_open()) {
		file << "This is what the computer calculated: \n";
		for (int i = 0; i < 3; i++) {
			file << grades[i] << " ";
		}
	}
	else {
		cout << "Some error.";
	}

	file.close();
}
