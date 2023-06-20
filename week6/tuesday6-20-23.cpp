#include <iostream>
using namespace std;

string company = "Google";
int ages[] = { 1,2,3,4 };

int main() {

	int manyScores[] = { 90, 95, 89 };
	cout << "Score 1 is: " << manyScores[1];
	cout << "Score 2 is: " << manyScores[2];
	cout << "Score 3 is: " << manyScores[3];

	cout << "Welcome to " << company << "'s score calculator!\n";

	/* using an array instead */
	const int NUM_SCORES = 5;
	int scoreList[NUM_SCORES];

	//cout << "Please give me 2 scores: ";
	//cin >> scoreList[0] >> scoreList[1];
	cout << "\n\nPlease enter " << NUM_SCORES << " scores: ";
	for (int i = 0; i < NUM_SCORES; i++) {
		cout << "\nScore #" << i + 1 << ": ";
		cin >> scoreList[i];
		if (scoreList[i] < 0) {
			cout << "\nError!";
			i--;
		}
	}

	int totalScore = 0;
	cout << "\n\nThe scores are: ";
	/* using a for loop to view all scoers */
	for (int spot = 0; spot < NUM_SCORES; spot++) {
		cout << "Exam #" << spot+1 << ": " << scoreList[spot] << " ";
		totalScore += scoreList[spot];
	}

	cout << "\n\nThe average is: " << totalScore / static_cast<double>(NUM_SCORES);
	// cout << "\n\nThe average is: " << (scoreList[0] + scoreList[1]) / static_cast<double>(NUM_SCORES);




	int score1;
	int score2;

	cout << "Please give me two scores: ";
	cin >> score1 >> score2;

	cout << (score1 + score2) / 2.0;

	cout << scoreList[10 - 9];
	int number = 1;
	cout << scoreList[number];

	cout << scoreList[number - 1];

	cout << scoreList[number++];
	// at this point of the program
	// number has value of 2



}
