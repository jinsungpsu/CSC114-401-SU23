#include <iostream>
#include <fstream>
using namespace std;

int factorial(int n) {
	int product = 1;
	for (int i = n; i > 0; i--) {
		product *= i;
	}
	return product;
}

int factorialRecursive(int n) {
	if (n == 1)
		// base case
		return 1;
	else
		// recursive
		return n * factorialRecursive(n - 1);
}

int main() {
	// 3! = 3 * 2 * 1 = 6
	cout << factorial(3);
	cout << endl << factorialRecursive(3);
	// 4! = 4 * 3 * 2 * 1 = 24
	cout << endl << factorial(4);
	cout << endl << factorialRecursive(4);
	// 99! = 99 * 98 * 97 ... etc...
}
