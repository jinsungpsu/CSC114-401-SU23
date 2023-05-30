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

    cout << "\n\nThe total $" << total;
    cout << "\nDollar bills: " << dollarBills;
    cout << "\nQuarters: " << quarters;
    cout << "\nDimes: " << dimes;
    cout << "\nNickels: " << nickels;
    cout << "\nPennies: " << pennies;

    
        
    return 0;
}
