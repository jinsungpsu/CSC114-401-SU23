// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    /*
    first dimension is game #
    second dimension is inning #
    */
    int phillies[161][9];
    
    for (int game = 0; game < 161; game++) {
        for (int inning = 0; inning < 9; inning++) {
            phillies[game][inning] = rand() % 5;
        }
    }

    for (int game = 0; game < 161; game++) {
        cout << "Game #" << game + 1 << ": ";
        for (int inning = 0; inning < 9; inning++) {
            cout << phillies[game][inning] << " ";
        }
        cout << endl;
    }

    cout << "They scored " << phillies[6][4] << " in the 5th inning of the 7th game!";

    // average number of runs in 3rd inning
    int runsInThirdInning = 0;
    for (int game = 0; game < 161; game++) {
        runsInThirdInning += phillies[game][2];
    }
    cout << "\nAvg number of runs in 3rd inning was: " << static_cast<double>(runsInThirdInning) / 161;

    // total number of runs in game 150


    // average number of runs in all games
    int totalRunsWholeSeason = 0;
    for (int game = 0; game < 161; game++) {
        for (int inning = 0; inning < 9; inning++) {
            totalRunsWholeSeason += phillies[game][inning];
        }
    }
    cout << "\nAvg number of runs in each game was: " << static_cast<double>(totalRunsWholeSeason) / 161;








    int scores[100];
    string scoreTitles[100];
    int scoreCount = 0;

    char repeat;
    int total = 0;

    do {
        cout << "\nEnter a score and assignment name: ";
        cin >> scores[scoreCount];
        cin >> scoreTitles[scoreCount];
        total += scores[scoreCount];
        scoreCount++;

        cout << "\nDo you want to enter another score? (y/n):";
        cin >> repeat;
    } while (repeat == 'y' && scoreCount < 100);

    cout << "\n\nINFO:";
    for (int i = 0; i < scoreCount; i++) {
        cout << "\nAssignment: " << scoreTitles[i] << ": " << scores[i];
    }

    double avg = static_cast<double>(total) / scoreCount;
    cout << "\n\nThe average is: " << avg;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
