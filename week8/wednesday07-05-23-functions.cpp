#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int LARGE_NUMBER = 100;

bool isNumberLarge;
int number;

bool isLarge(int num);
void isLargeBadVersion();

int sum(int num1, int num2) {
	return num1 + num2;
}

int sum(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}

int main() {
	
	cout << "Enter a number: ";
	
	cin >> number;

	if (isLarge(number)) {
		cout << "That number is large!";
	}
	else {
		cout << "That number is not large!";
	}

	bool isThatNumberLarge = isLarge(200);

	// calling the bad version with no return data or params
	isLargeBadVersion();

	if (isNumberLarge) {
		cout << "That number is large!";
	}

	return 0;
}

void isLargeBadVersion() {
	// no return data or parameters
	// bc we're using global vars
	if (number > LARGE_NUMBER) {
		isNumberLarge = true;
	}
	else {
		isNumberLarge = false;
	}
}

bool isLarge(int num) {
	string message;
	if (num > LARGE_NUMBER) {
		message = "Large number!";
		return true;
	}
	else {
		return false;
	}
}
