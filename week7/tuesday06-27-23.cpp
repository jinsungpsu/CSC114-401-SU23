// Jin An
// Delaware Technical Community College
// 5/23/23
// Variables and data types

#include <iostream>
#include <string>
using namespace std;

int multiplyNumbers(int num1, int num2) {
    return num1 * num2;
}

double divideNumbers() {
    cout << "\nEnter two numbers to divide: ";
    double num1, num2;
    cin >> num1 >> num2;
    return num1 / num2;
}

int helloWorld();
void printHashDivider();
void mainMenuTitle();

int main()
{
    cout << "Enter two numbers to multiply: ";
    int num1, num2;
    cin >> num1 >> num2;
    int multiplicationResult = multiplyNumbers(num1, num2);
    double divisionResult = divideNumbers();

    cout << "\n\nMultiplication result was: " << multiplicationResult;
    cout << "\n\nDivision result was: " << divisionResult;

    int helloWorldReturnData = helloWorld();
    cout << "\nReturned data from hello world function is: " << helloWorldReturnData;


    mainMenuTitle();

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

    return 0;

}

int helloWorld() {
    cout << "Hello World";

    return 5;
}

void printHashDivider() {
    cout << "\n#########################################################";
}

void mainMenuTitle() {
    printHashDivider();
    printHashDivider();
    cout << "\n### Welcome to our totally legit tax evasion program! ###";
    printHashDivider();
    printHashDivider();
}
