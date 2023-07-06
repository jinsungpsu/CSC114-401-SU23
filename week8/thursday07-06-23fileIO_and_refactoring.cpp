#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int howManyLottoMatches(int lottery[], int user[]) {
	return 0;
}

void generateRandomLotto(int lottery[]) {
	lottery[0] = 5;
	lottery[1] = 7;
	lottery[2] = 8;
}

void displayIngredientsNeeded(int numCookies, double sugarPerCookie, double flourPerCookie, double butterPerCookie) {

}

void displayRepairItems(string repairNames[], int repairPrices[], int repairCount) {
	for (int i = 0; i < repairCount; i++) {
		cout << "\n" << repairNames[i] << ": $" << repairPrices[i];
	}
}

void writeRepairItemsToFile(string repairNames[], int repairPrices[], int repairCount) {
	ofstream outputFile("..\\..\\data\\prices\\outputTest.txt", ios::app);
	outputFile << "This is a list of all the repairs by our company: ";
	for (int i = 0; i < repairCount; i++) {
		outputFile << "\n" << repairNames[i] << ": $" << repairPrices[i];
	}
	outputFile.close();
}

int sumAllRepairs(int repairPrices[], int repairCount) {
	int sum = 0;
	for (int i = 0; i < repairCount; i++) {
		sum += repairPrices[i];
	}
	return sum;
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

	cout << "\n\nAll repairs would cost: $" << sumAllRepairs(repairPrice, repairServicesCount);



	// close the file
	file.close();

	writeRepairItemsToFile(repairName, repairPrice, repairServicesCount);

	return 0;
	
}
