#include <iostream>
using namespace std;

void iterativeCountdown() {
	cout << "Countdown!";
	for (int i = 10; i >= 0; i--) {
		cout << "\n" << i;
	}
	cout << "\nBlastoff!";
}

void recursiveCountdown(int num) {
	if (num < 0) {
		// base case
		return;
	}
	else {
		// recursive case
		cout << endl << num;
		recursiveCountdown(num - 1);
	}

}

int main() {
	recursiveCountdown(10);
}
