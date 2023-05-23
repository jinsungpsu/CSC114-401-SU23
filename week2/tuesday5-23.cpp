// Jin An
// Delaware Technical Community College
// 5/23/23
// Variables and data types

#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << 7.0 / 3.0;

    cout << endl;
    // char piCharacter = 227;
    // cout << piCharacter;

    /* start of multiline comment
    how to avoid taxes software
    
    problem we're trying to solve
    find loopholes in the tax system

    end of multiline comment */

    // variable to store all the money you made
    double grossIncome = 100.50;    

    // the dollar amount NOT taxable
    double deductions;               
    char middleInitial = 'D';
    string firstName, lastName;
    firstName = "George";
    lastName = "Washington";

    deductions = 1.895e6;
    // if we want to use scientific notation
    // 1.895 x 10^1
    // deductions = 1.895e1

    int adjustedGrossIncome;
    adjustedGrossIncome = grossIncome - deductions;

    // string marriageStatus = "married";
    // char married = 'y';
    // if we agree that the number 100 means you are married, and 999 means you are single
    // int married = 100;
    bool married = true;  // alternative, we can say married = 1;

    cout << "#########################################################";
    cout << "\n#########################################################";
    cout << "\n### Welcome to our totally legit tax evasion program! ###";
    cout << "\n#########################################################";
    cout << "\n#########################################################";

    cout << "\n\nName: " << firstName << " " << middleInitial << " " << lastName;
    cout << "\nMarried status: " << married;
    
    cout << "\n\nYour gross income is: $" << grossIncome;
    cout << "\nYour deductions are: $" << deductions;
    cout << "\nYour adjusted gross income is: $" << adjustedGrossIncome;

    cout << "\n\n\n";

}

