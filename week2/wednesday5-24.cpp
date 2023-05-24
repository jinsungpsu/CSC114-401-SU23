// Jin An
// Delaware Technical Community College
// 5/23/23
// Variables and data types

#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    /*
    * HIGHEST
    * double
    * float
    * int 
    * LOWEST
    */

    /*
    int integer = 1;
    float floatingPointNumber = integer;

    double doubleNumber = 999.99;
    int smallerContainer = doubleNumber;

    cout << endl << floatingPointNumber;
    cout << endl << smallerContainer;
    cout << endl << endl;
    */

    //CSC114-Assignment2.cpp(24,26): warning C4244: 'initializing': conversion from 'double' to 'int', possible loss of data

    /*
    int divisor = 3;
    cout << 7 / 3; // this displays 2
    cout << endl;
    cout << 7 / 3.0; // this displays 2.333
    cout << endl;
    cout << 7 / static_cast<double>(divisor);
    */

    // double radius = 5;
    // double circleArea = 3.14 * pow(radius,2);
    
    // const double PI = 3.14159;

    // char piCharacter = 227;
    // cout << piCharacter;

    /* start of multiline comment
    how to avoid taxes software
    
    problem we're trying to solve
    find loopholes in the tax system

    end of multiline comment */

    // variable to store all the money you made
    // double grossIncome = 100.50;  // don't hard code
    double grossIncome;
    double deductions; 
    double adjustedGrossIncome;
    

    const double TAX_RATE = 0.30; // 30% tax rate

    // the dollar amount NOT taxable
    char middleInitial;
    string firstName, lastName;


    // if we want to use scientific notation
    // 1.895 x 10^1
    // deductions = 1.895e1

    
    

    // string marriageStatus = "married";
    // char married = 'y';
    // if we agree that the number 100 means you are married, and 999 means you are single
    // int married = 100;
    bool married;  // alternative, we can say married = 1;

    cout << "#########################################################";
    cout << "\n#########################################################";
    cout << "\n### Welcome to our totally legit tax evasion program! ###";
    cout << "\n#########################################################";
    cout << "\n#########################################################";

    cout << "\nWhat is your name (first name and last name separated by a space):";
    cin >> firstName >> lastName;

    cout << "\nWhat is your middle name initial: ";
    cin >> middleInitial;

    cout << "\nPlease enter your gross income for this year: $";
    cin >> grossIncome;

    cout << "\nPlease enter any deductions for this year: $";
    cin >> deductions;

    cout << "\nAre you married? (enter 1 for yes, and 0 for no):";
    cin >> married;

    adjustedGrossIncome = grossIncome - deductions;

    cout << "\nPlease enter any additional deductions for this year: $";
    cin >> deductions;

    // adjustedGrossIncome = adjustedGrossIncome - deductions;
    adjustedGrossIncome -= deductions;



    cout << "\n\nName: " << firstName << " " << middleInitial << " " << lastName;
    cout << "\nMarried status: " << married;
    
    cout << "\n\nYour gross income is: $" << grossIncome;
    cout << "\nYour deductions are: $" << deductions;
    cout << "\nYour adjusted gross income is: $" << adjustedGrossIncome;

    cout << "\n\n\n";

}

