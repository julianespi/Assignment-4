// Julian Espinoza
// Wesley Goo
// Hamza Patel
// Arturo Islas Mejia
// Date: 3/7/2022

#include <iostream>
#include <stack>
#include <iomanip>
#include <iterator>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <chrono>
#include <vector>
#include "input.h"
#include "complexNumbers.h"
#include "rationalNumbers.h"
#include "polynomials.h"

using namespace std;

int mainMenuOption();

int main()
{
    do
    {
        switch (mainMenuOption())
        {
        case 0: exit(1); break;
        case 1: complexNumbers(); break;
        case 2: rationalNumbers(); break;
        case 3: polynomials(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

//Precondition:none
//PostCondition:displays the main menu
int mainMenuOption()
{
    cout << endl << "Chapter 4: Assignment by Julian Espinoza";
    cout << endl << "==========================================";
    cout << endl << "1. Complex Numbers";
    cout << endl << "2. Rational Numbers";
    cout << endl << "3. Polynomials";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 3);
    cout << endl << endl << endl;
    return options;
}
