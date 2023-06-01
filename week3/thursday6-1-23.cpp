// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// defining global varialbes
const double DEFAULT_TIP_RATE = .9;

int main() {
    
    float tip;
    int choice;

    cout << "\nHow much do you want to tip?";
    cout << "\n1: 25%\n2: 30%\n3: 40%";
    cout << "\nPlease enter 1-3 to select the tip amount: ";
    cin >> choice;

    switch (choice) {
        case 1:
            tip = .25;
            break;
        case 2:
            tip = .3;
            break;
        case 3:
            tip = .4;
            break;

        default:
            cout << "Error";
            tip = DEFAULT_TIP_RATE;
            float idiotTax = 5;
            break;
    }

    cout << "\nYou chose to tip " << tip * 100 << "%";

    /*
    float idiotTax = 10;
    char idiotTax;
    */
    cout << "You may be assessed an idiot tax of: " << idiotTax;

    if (choice == 1) {
        tip = .25;
    }
    else if (choice == 2) {
        tip = .3;
    }
    else if (choice == 3) {
        tip = .4;
    }
    else {
        cout << "\n\nError - you did not choose 1-3 - try again!";
        cout << "\nPlease enter 1-3... again... you dummy";
        cin >> choice;
        if (choice == 1) {
            tip = .25;
        }
        else if (choice == 2) {
            tip = .3;
        }
        else if (choice == 3) {
            tip = .4;
        }
        else {
            cout << "\n\nError - you did not choose 1-3 a second time - I'm mad.  You're gonna be charged 90% tip!!";
            tip = DEFAULT_TIP_RATE;
        }
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
