#pragma once
#include "input.h"
#include "Rational.h"

//precondition: none
//postcondition: displays menu for single rational number
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

//precondition: empty value for numerator
//postcondition: get numerator value
void inputNumerator(int& numerator)
{
    numerator = inputInteger("Input a numerator: ");
}

//precondition: empty value for denominator
//postcondition: get denominator value
void inputDenominator(int& denominator)
{
    denominator = inputInteger("Input a denominator: ");
}

//precondition: one rational number
//postcondition: displays rational number
void displayRationalNumber(const int numerator, const int denominator)
{
    cout << "Numerator: " << numerator << endl;
    cout << "Denominator: " << denominator << endl;
    cout << numerator << " / " << denominator;
}

//precondition: one rational number
//postcondition: normalizes rational number
void normalizeRationalNumber(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    cout << "Numerator: " << temp.getNumerator() << endl;
    cout << "Denominator: " << temp.getDenominator() << endl;
    temp.normalize();
    cout << temp.getNumerator() << " / " << temp.getDenominator();
    numerator = temp.getNumerator();
    denominator = temp.getDenominator();
}

//precondition: one rational number
//postcondition: negates rational number
void negateRationalNumber(int& numerator, int& denominator)
{
    cout << "-(" << numerator << "/" << denominator << ") = ";
    numerator = -numerator;
    denominator = -denominator;
    cout << numerator << "/" << denominator << endl;
}

//precondition: one rational number
//postcondition: evaluates rational number against an integer through addition
void addConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") + " << constantRat << " = ";
    temp = constantRat + temp;
    cout << temp.getNumerator() << "/" << temp.getDenominator() << endl;
}

//precondition: one rational number
//postcondition: evaluates rational number against an integer through subtraction
void subtractConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") - " << constantRat << " = ";
    temp = constantRat - temp;
    cout << temp.getNumerator() << "/" << temp.getDenominator() << endl;
}

//precondition: one rational number
//postcondition: evaluates rational number against an integer through multiplication
void multiplyConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") * " << constantRat << " = ";
    temp = constantRat * temp;
    cout << temp.getNumerator() << "/" << temp.getDenominator() << endl;
}

//precondition: one rational number
//postcondition: evaluates rational number against an integer through division
void divideConstantRational(int& numerator, int& denominator)
{
    Rational temp;
    temp.setNumerator(numerator);
    temp.setDenominator(denominator);
    int constantRat = inputInteger("Input an integer value: ");
    cout << "(" << numerator << "/" << denominator << ") / " << constantRat << " = ";
    temp = constantRat / temp;
    cout << temp.getNumerator() << "/" << temp.getDenominator() << endl;
}

//precondition: none
//postcondition: chooses menu for single rational number
int numerator;
int denominator;
void singleRationalNumber()
{
    do
    {
        switch (singleRationalNumberMenuOption())
        {
        case 0: return; break;
        case 1: inputNumerator(numerator); break;
        case 2: inputDenominator(denominator); break;
        case 3: displayRationalNumber(numerator, denominator); break;
        case 4: normalizeRationalNumber(numerator, denominator); break;
        case 5: negateRationalNumber(numerator, denominator); break;
        case 6: addConstantRational(numerator, denominator); break;
        case 7: subtractConstantRational(numerator, denominator); break;
        case 8: multiplyConstantRational(numerator, denominator); break;
        case 9: divideConstantRational(numerator, denominator); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

//precondition: none
//postcondition: displays menu for multiple rational numbers
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

//precondition: empty rational value
//postcondition: get rational value
void inputRational(Rational& R1)
{
    cin >> R1;
    cout << "R1 = ";
    cout << R1 << endl;
}

//precondition: empty rational value
//postcondition: get rational value
void inputRational_2(Rational& R2)
{
    cin >> R2;
    cout << "R2 = ";
    cout << R2 << endl;
}

//precondition: two rational numbers
//postcondition: evaluates two rational numbers against each other
void verifyCondition(Rational& R1, Rational& R2)
{
    int truth = (R1 == R2);
    if (truth == 1)
    {
        cout << "R1 == R2 -> (" << R1 << ") == (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1 == R2 -> (" << R1 << ") == (" << R2 << ") ? false" << endl;
    }
    truth = 2; //always here in between bools to prevent boolean error
    truth = (R1 != R2);
    if (truth == 1)
    {
        cout << "R1 != R2 -> (" << R1 << ") != (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1 != R2 -> (" << R1 << ") != (" << R2 << ") ? false" << endl;
    }
    truth = 2; //always here in between bools to prevent boolean error
    truth = (R1 >= R2);
    if (truth == 1)
    {
        cout << "R1 >= R2 -> (" << R1 << ") >= (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1 >= R2 -> (" << R1 << ") >= (" << R2 << ") ? false" << endl;
    }
    truth = 2; //always here in between bools to prevent boolean error
    truth = (R1 > R2);
    if (truth == 1)
    {
        cout << "R1  > R2 -> (" << R1 << ")  > (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1  > R2 -> (" << R1 << ")  > (" << R2 << ") ? false" << endl;
    }
    truth = 2; //always here in between bools to prevent boolean error
    truth = (R1 != R2);
    if (truth <= 1)
    {
        cout << "R1 <= R2 -> (" << R1 << ") <= (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1 <= R2 -> (" << R1 << ") <= (" << R2 << ") ? false" << endl;
    }
    truth = 2; //always here in between bools to prevent boolean error
    truth = (R1 < R2);
    if (truth == 1)
    {
        cout << "R1  < R2 -> (" << R1 << ")  < (" << R2 << ") ? true" << endl;
    }
    else if (truth == 0)
    {
        cout << "R1  < R2 -> (" << R1 << ")  < (" << R2 << ") ? false" << endl;
    }
}

//precondition: two rational numbers
//postcondition: evaluates two rational numbers against each other through arithmatic
void evaulateArithmatic(Rational& R1, Rational& R2)
{
    Rational temp;
    temp = R1 + R2;
    cout << "Addition      : R1 + R2 -> (" << R1 << ") + (" << R2 << ") = " << temp << endl;
    temp = R1 - R2;
    cout << "Subtraction   : R1 - R2 -> (" << R1 << ") - (" << R2 << ") = " << temp << endl;
    temp = R1 * R2;
    cout << "Multiplication: R1 * R2 -> (" << R1 << ") * (" << R2 << ") = " << temp << endl;
    if (R1.getNumerator() == 0 && R2.getNumerator() == 0)
    {
        cout << "Division      : R1 / R2 -> (" << R1 << ") / (" << R2 << ") = 0/0" << endl;
    }
    else
    {
        temp = R1 / R2;
        cout << "Division      : R1 / R2 -> (" << R1 << ") / (" << R2 << ") = " << temp << endl;
    }
}

//precondition: two rational numbers
//postcondition: evaluates two rational numbers against 621/889
void evaluateRationalNumber(Rational& R1, Rational& R2)
{
    int truth;
    Rational tempf;
    Rational temp;
    Rational temp_2;
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
    cout << "R3 = " << Rational(621, 889) << endl << endl;
    cout << "Evaluation Expression..." << endl;
    temp = R1 + R2;
    temp_2 = R2 - R1;
    tempf = ((3 * temp) / 7) / (temp_2 / 9);
    truth = tempf >= Rational(621, 889);
    cout << "         (3 * (R1 + R2) / 7) / (R2 - R1 / 9) >= 621/889 ?" << endl;
    cout << "Step #1: (3 * (" << temp << ") / 7) / (" << temp_2 << " / 9) >= 621/889 ?" << endl;
    temp = 3 * temp;
    temp_2 = temp_2 / 9;
    cout << "Step #2: (" << temp << " / 7) / (" << temp_2 << ") >= 621/889 ?" << endl;
    cout << "Step #3: (" << temp << ") / (" << temp_2 << ") >= 621/889 ?" << endl;
    if (temp.getNumerator() == 0 && temp_2.getNumerator() == 0)
    {
        cout << "Step #4: (0/0) >= 621/889 ?" << endl;
    }
    else
    {
        cout << "Step #4: (" << tempf << ") >= 621/889 ?" << endl;
    }
    if (truth == 1)
    {
        cout << "Step #5: true" << endl;
    }
    else if (truth == 0)
    {
        cout << "Step #5: false" << endl;
    }
}

//precondition: none
//postcondition: chooses menu for multiple rational numbers
Rational(R1);
Rational(R2);
void mutlipleRationalNumbers()
{
    do
    {
        switch (mutlipleRationalNumbersMenuOption())
        {
        case 0: return; break;
        case 1: inputRational(R1); break;
        case 2: inputRational_2(R2); break;
        case 3: verifyCondition(R1, R2); break;
        case 4: evaulateArithmatic(R1, R2); break;
        case 5: evaluateRationalNumber(R1, R2); break;
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