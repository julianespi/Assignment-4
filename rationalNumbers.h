#pragma once
#include "input.h"
#include "Rational.h"

int singleRationalNumberMenuOption()
{
    cout << endl << "A Rational Number";
    cout << endl << "==========================================";
    cout << endl << "1. Enter the numerator";
    cout << endl << "2. Enter the denominator";
    cout << endl << "3. Display the rational number";
    cout << endl << "4. Normalize the rational number";
    cout << endl << "5. Negate the rational number";
    cout << endl << "6. Add (+) the rational number with a constant";
    cout << endl << "7. Subtract (-) the rational number with a constant";
    cout << endl << "8. Multiply (*) the rational number with a constant";
    cout << endl << "9. Divide (/) the rational number with a constant";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 9);
    cout << endl << endl << endl;
    return options;
}

void inputNumerator(int& numerator)
{
    numerator = inputInteger("Input a numerator: ");
}

void inputDenominator(int& denominator)
{
    denominator = inputInteger("Input a denominator: ");
}

void displayRationalNumber(const int numerator, const int denominator)
{
    cout << "Numerator: " << numerator << endl;
    cout << "Denominator: " << denominator << endl;
    cout << numerator << " / " << denominator;
}

void normalizeRationalNumber(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    temp.normalize();
    cout << "Numerator: " << numerator << endl;
    cout << "Denominator: " << denominator << endl;
    cout << numerator << " / " << denominator;
}

void negateRationalNumber(int& numerator, int& denominator)
{
    cout << "-(" << numerator << "/" << denominator << ") = ";
    numerator = -numerator;
    denominator = -denominator;
    cout << numerator << "/" << denominator << endl;
}

void addConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") + " << constantRat << " = ";
    numerator = +(constantRat, numerator);
    cout << numerator << "/" << denominator << endl;
}

void subtractConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") - " << constantRat << " = ";
    numerator = -(constantRat, numerator);
    cout << numerator << "/" << denominator << endl;
}

void multiplyConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") * " << constantRat << " = ";
    numerator = 1*(numerator, constantRat);
    cout << numerator << "/" << denominator << endl;
}

void divideConstantRational(int& numerator, int& denominator)
{

}

void singleRationalNumber()
{
    do
    {
        switch (singleRationalNumberMenuOption())
        {
        case 0: return; break;
        case 1: inputNumerator(); break;
        case 2: inputDenominator(); break;
        case 3: displayRationalNumber(); break;
        case 4: normalizeRationalNumber(); break;
        case 5: negateRationalNumber(); break;
        case 6: addConstantRational(); break;
        case 7: subtractConstantRational(); break;
        case 8: multiplyConstantRational(); break;
        case 9: divideConstantRational(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

int  mutlipleRationalNumbersMenuOption()
{
    cout << endl << "Multiple Rational Numbers";
    cout << endl << "==========================================";
    cout << endl << "1. Enter rational number R1";
    cout << endl << "2. Enter rational number R2";
    cout << endl << "3. Verify condition operators (==, !=, >=, >, <= and <) of R1 and R2";
    cout << endl << "4. Evaluate arithmatic operators (+, - , * and /) of R1 and R2";
    cout << endl << "5. Evaluate (3 * (R1 + R2) / 7) / (R2 - R1 / 9) >= 621/889";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 5);
    cout << endl << endl << endl;
    return options;
}

void inputRational()
{

}

void verifyCondition()
{

}

void evaulateArithmatic()
{

}

void evaluateRationalNumber()
{

}

void mutlipleRationalNumbers()
{
    do
    {
        switch (mutlipleRationalNumbersMenuOption())
        {
        case 0: return; break;
        case 1: inputRational(); break;
        case 2: inputRational(); break;
        case 3: verifyCondition(); break;
        case 4: evaulateArithmatic(); break;
        case 5: evaluateRationalNumber(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

//Precondition:none
//PostCondition:displays the main menu
int rationalNumbersMenuOption()
{
    cout << endl << "Chapter 4: Assignment by Julian Espinoza";
    cout << endl << "==========================================";
    cout << endl << "1. A Rational Number";
    cout << endl << "2. Multiple Rational Numbers";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 2);
    cout << endl << endl << endl;
    return options;
}

void rationalNumbers()
{
    do
    {
        switch (rationalNumbersMenuOption())
        {
        case 0: return; break;
        case 1: singleRationalNumber(); break;
        case 2: mutlipleRationalNumbers(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}