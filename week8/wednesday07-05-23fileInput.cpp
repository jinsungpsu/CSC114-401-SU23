#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	ifstream file("..\\..\\data\\prices\\masterPriceFile.txt"); 
	// relative path
	// .. means go "up" a folder
	// and you can also go into specific folders...

	// ifstream file2("C:\\Users\\Jin\\source\\repos\\ConsoleApplication1\\ConsoleApplication1\\information.txt");
	// absolute path
	string companyName;
	file >> companyName;

	double phoneRepair;
	file >> phoneRepair;

	double pcRepair;
	file >> pcRepair;

	cout << "Welcome to " << companyName << endl;
	cout << "The price for phone repair is $" << phoneRepair;
	cout << "\nThe price for PC repair is $" << pcRepair;

	// close the file
	file.close();
	return 0;
	
}
