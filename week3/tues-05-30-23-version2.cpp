// CSC114-Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3;
    cin >> score1 >> score2 >> score3;

    double avg = (score1 + score2 + score3) / 3.0;

    cout << "\n\nThe average score is: " << avg;

    if (avg > 95)
    {
        cout << "\n\nGood job!";
        cout << "\nYou got over a 95 score!";
    }
    else 
    {
        // anything that is 95 or less...
        cout << "\n\nYou got less than 95";
    }
    // small program to figure out
    // how many dollar bills
    // quarters
    // dimes
    // nickels
    // and pennies
    int total;
    cout << "\n\nEnter number of pennies to change into dollars, quarters, dimes, nickels, and pennies: ";
    cin >> total;

    if (total < 0) {
        cout << "\n\nYou can't have a negative number of pennies!";
        return 0;
    }
    else {
        int leftover;

        int dollarBills = total / 100;
        leftover = total % 100;

        int quarters = leftover / 25;
        leftover = leftover % 25;

        int dimes = leftover / 10;
        leftover = leftover % 10;

        int nickels = leftover / 5;
        leftover = leftover % 5;

        int pennies = leftover;

        cout << "\n\nThe total: " << total;
        cout << "\nDollar bills: " << dollarBills;
        cout << "\nQuarters: " << quarters;
        cout << "\nDimes: " << dimes;
        cout << "\nNickels: " << nickels;
        cout << "\nPennies: " << pennies;

    }
    return 0;
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
