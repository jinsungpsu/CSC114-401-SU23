

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int STUDENTNUM = 10;
const int COURSENUM = 5;

int main()
{
	string fname;
	cout << "Enter the file name: ";
	cin >> fname;
	string line, word;
	int score[STUDENTNUM][COURSENUM];
	/*
	* int scoreManual[2][5] = {
		{67,78,89,90,78},
		{78,89,66,99,89}
	};

	ARRAY OF ARRAYS
	int student1[5] = {67,78,89,90,78};
	int student2[5] = { 78,89,66,99,89 };
	
	int scoreManu[2][5] = { student1, student2 };
	*/
	

	fstream file(fname, ios::in);
	if (file.is_open())
	{
		int rw = 0;
		while (getline(file, line))
		{
			//row.clear();
			int cl = 0;

			stringstream str(line);

			while (getline(str, word, ','))
			{
				score[rw][cl++] = stoi(word);

			}

			rw++;
		}
	}
	else {
		cout << "Could not open the file\n";
		cout << "Exiting program!  Error!";
		return 0;
	}


	for (int i = 0; i < STUDENTNUM; i++)
	{
		for (int j = 0; j < COURSENUM; j++)
		{
			cout << score[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}

