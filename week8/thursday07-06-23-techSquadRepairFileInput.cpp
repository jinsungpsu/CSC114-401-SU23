#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void displayRepairItems(string repairNames[], int repairPrices[], int repairCount) {
	for (int i = 0; i < repairCount; i++) {
		cout << "\n" << repairNames[i] << ": $" << repairPrices[i];
	}
}

int main() {
	ifstream file("..\\..\\data\\prices\\masterPriceFile.txt"); 
	// relative path
	// .. means go "up" a folder
	// and you can also go into specific folders...

	// ifstream file2("C:\\Users\\Jin\\source\\repos\\ConsoleApplication1\\ConsoleApplication1\\information.txt");
	// absolute path
	string companyName;
	file >> companyName;


	cout << "Welcome to " << companyName << endl;

	/*
	Read the prices of all the repairs, but
	we want to be flexible... it may be 4 items
	or 1 item... or 100 items
	*/

	string repairName[100];
	int repairPrice[100];
	int repairServicesCount = 0;

	while (!file.eof()) {
		file >> repairName[repairServicesCount];
		file >> repairPrice[repairServicesCount];
		// cout << "\n" << repairName[repairServicesCount] << ": $" << repairPrice[repairServicesCount];
		repairServicesCount++;
	}

	displayRepairItems(repairName, repairPrice, repairServicesCount);



	// close the file
	file.close();
	return 0;
	
}
