/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    // how many pizzas do we need to cook?
    // make this an input
    int howManyPizzas;
    cin >> howManyPizzas;
    
    // do some calculations
    // I need 2 cups of flour for every pizzas
    int cupsOfFlourNeeded = howManyPizzas * 2;
    
    // tell me how many cups of flour do I need to buy for my company
    cout << "In order to make ";
    cout << howManyPizzas;
    cout << " pizzas, you'll need ";
    cout << cupsOfFlourNeeded;
    cout << " cups of flour.";

    return 0;
}
