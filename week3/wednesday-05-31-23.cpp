// CSC114-Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name = "Joe Biden";
    bool vip = true;
    bool passingAverage; // will the student pass the course!

    int score1, score2, score3;
    cout << "Please enter three test scores: ";
    cin >> score1 >> score2 >> score3;

    if (score1 < 0 || score1 > 100 || score2 < 0 || score3 < 0 || score2 > 100 || score3 > 100) {
        // score1 input is no good
        cout << "You dummy, that's not in range!";
        cout << "\nExiting program...";
        return 0;
    }
    if (score2 < 0 || score2 > 100) {
        // score2 input is no good
        cout << "You dummy, that's not in range!";
        cout << "\nExiting program...";
        return 0;
    }

    /*
    Logic error
    */

    if (score1 >= 70) {
        cout << "You got a C!";
    }
    else if (score1 >= 80) {
        cout << "B";
    }
    else if (score1 >= 90) {
        cout << "A";
    }
    else {

    }


    if (score1 >= 90) {
        cout << "A";
    }
    else if (score1 >= 80) {
        cout << "B";
    }
    else if (score1 >= 70) {
        cout << "C";
    }

    /*
    the above code is logically equivalent to the code below
    */
    if (score1 >= 90) {
        cout << "You got an A!";
    }
    else {
        // you didn't get an A
        if (score1 >= 80) {
            cout << "You got a B!";
        }
        else {
            // you didn't get a B OR an A
            if (score1 >= 70) {
                cout << "You got a C!";
            }
            else {
                // you didn't get an A, or B, or C
            }
        }
    }

    if (vip == true) {
        // if (vip)
        // last two lines are equivalent
        cout << "This is a vip!";

    }

    if (0 > score1 > 100) {
        // no no
        // logic error
        // will calculate
        // (0 > score1) first... which 
        // will result in 0 or 1
        // then do that result > 100 (which is always false)
    }

    if (name == "joe biden" || name == "Joe Biden") {
        cout << "you're joe";
    }

    if (score1 > 70 || score2 > 70 || score3 > 70) {
        cout << "Yep - you passed at least one exam";
    }   

    if (((name == "Joe Biden") && (score1 > 90)) && (score2 > 90)) {
        /*
        1+1+1
        */

    }
    // equivalent to
    if (name == "Joe Biden") {
        if (score1 > 90) {
            // this is the same
        }
    }

    if (name == "Joe Biden") {
        cout << " You are the president of the USA.  We'll automatically give you a 100% on all your exams and give you an honorary degree";
        score1 = 100;
        score2 = 100;
        score3 = 100;
    }
    else {
        // you're not a VIP, something else happens here!
    }
    if (score1 > 90)
    {

        if (score2 > 90) {
            /*
            CODE HERE
            WILL ONLY EVER BE EXECUTED
            when BOTH if statements above are true
            */
            cout << "You got A's on the first two exams!";

            if (score3 < 60) {
                cout << "You got A's in first two exams, but then you failed the third exam!";
            }
        }
        /*
        CODE HERE
        will only be executed if the FIRST if statement is true...
        doesn't depend on the second, nested if statement whatsoever
        */

    }

    double avg = (score1 + score2 + score3) / 3.0;

    if (avg >= 70) {
        passingAverage = true;
    }

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




    if (passingAverage == true) {
        cout << "congratulations, you've passed the course!";
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
