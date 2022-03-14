#pragma once


int multipleComplexNumbesMenuOption()
{
    cout << endl << "Multiple Complex Numbers";
    cout << endl << "==========================================";
    cout << endl << "1. Enter complex number C1";
    cout << endl << "2. Enter complex number C2";
    cout << endl << "3. Verify condition operators (== and !=) of C1 and C2";
    cout << endl << "4. Evaluate arithmatic operators (+, - , * and /) of C1 and C2";
    cout << endl << "5. Evaluate steps in (3 * (C1 + C2) / 7) / (C2 - C1 / 9) != (1.07109 + 0.120832i) ?";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int  options = inputInteger("Options: ", 0, 5);
    cout << endl << endl << endl;
    return options;
}

void displayOnlyComplexnumber(const double realNumber, const double imaginaryNumber)
{
    if (realNumber == 0 && imaginaryNumber == 0)
        cout << "0" ;
    else if (realNumber == 0)
        cout << imaginaryNumber << "i" ;
    else if (imaginaryNumber == 0)
        cout << realNumber;
    else if (imaginaryNumber < 0)
        cout << realNumber << " - " << imaginaryNumber / -1 << "i" ;
    else
        cout << realNumber << " + " << imaginaryNumber << "i";
}

void displayComplexnumber(const  double  realNumber, const  double  imaginaryNumber)
{
    if (realNumber == 0 && imaginaryNumber == 0)
        cout << "Complex number: " << "0" << endl;
    else if (realNumber == 0)
        cout << "Complex number: " << imaginaryNumber << "i" << endl;
    else if (imaginaryNumber == 0)
        cout << "Complex number: " << realNumber << endl;
    else if (imaginaryNumber < 0)
        cout << "Complex number: " << realNumber << " - " << imaginaryNumber / -1 << "i" << endl;
    else
        cout << "Complex number: " << realNumber << " + " << imaginaryNumber << "i" << endl;
}

void inputComplexNumber(double& realNumber, double& imaginaryNumber)
{
    realNumber = inputDouble("Enter a real number: ");
    imaginaryNumber = inputDouble("enter a imaginary number: ");

    displayComplexnumber(realNumber, imaginaryNumber);
}


void veryfiyConditions(double realNumberC1, double realNumberC2, double imaginaryNumberC1, double imaginaryNumberC2)
{
    bool equalBool, notEqualBool;
    cout << " C1 == C2 -> "; 
    if (realNumberC1 == realNumberC2 && imaginaryNumberC1 == imaginaryNumberC2)
    {
        cout << "(";
        displayOnlyComplexnumber(realNumberC1, imaginaryNumberC1);
        cout << ")";
        cout << " == ";
        cout << "(";
        displayOnlyComplexnumber(realNumberC2, imaginaryNumberC2);
        cout << ")";
        cout << " ? true " << endl;
        
    }
    else
    {
        cout << "(";
        displayOnlyComplexnumber(realNumberC1, imaginaryNumberC1);
        cout << ")";
        cout << " == ";
        cout << "(";
        displayOnlyComplexnumber(realNumberC2, imaginaryNumberC2);
        cout << ")";
        cout << " ? false " << endl;
        
    }
    cout << endl;
    cout << " C1 != C2 -> ";
    if (realNumberC1 != realNumberC2 && imaginaryNumberC1 != imaginaryNumberC2)
    {
        cout << "(";
        displayOnlyComplexnumber(realNumberC1, imaginaryNumberC1);
        cout << ")";
        cout << " != ";
        cout << "(";
        displayOnlyComplexnumber(realNumberC2, imaginaryNumberC2);
        cout << ")";
        cout << " ? true " << endl;

    }
    else
    {
        cout << "(";
        displayOnlyComplexnumber(realNumberC1, imaginaryNumberC1);
        cout << ")";
        cout << " != ";
        cout << "(";
        displayOnlyComplexnumber(realNumberC2, imaginaryNumberC2);
        cout << ")";
        cout << " ? false " << endl;

    }
}

void evaluateComplexNumbers()
{

}

void evaluateSteps()
{

}

void multipleComplexNumbers()
{
    double realNumberC1 = 0, imaginaryNumberC1 = 0;
    double realNumberC2 = 0, imaginaryNumberC2 = 0;
    do
    {
        switch (multipleComplexNumbesMenuOption())
        {
        case 0: return; break;
        case 1: inputComplexNumber(realNumberC1, imaginaryNumberC1); break;
        case 2: inputComplexNumber(realNumberC2, imaginaryNumberC2); break;
        case 3: veryfiyConditions(realNumberC1, realNumberC2, imaginaryNumberC1, imaginaryNumberC2); break;
        case 4: evaluateComplexNumbers(); break;
        case 5: evaluateSteps(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

 int singleComeplexNumberMenuOption()
{
    cout << endl << "A Complex Number";
    cout << endl << "==========================================";
    cout << endl << "1. Enter the real number";
    cout << endl << "2. Enter the imaginary number";
    cout << endl << "3. Display the complex number";
    cout << endl << "4. Negate the complex number";
    cout << endl << "5. Add (+) the complex number with a constant";
    cout << endl << "6. Subtract (-) the complex number with a constant";
    cout << endl << "7. Multiply (*) the complex number with a constant";
    cout << endl << "8. Divide (/) the complex number with a constant";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 8);
    cout << endl << endl << endl;
    return options;
}

void inputRealnumber( double  &realNumber)
{
    realNumber = inputDouble("Enter a real number: ");
}

void inputImaginaryNumber( double  &imaginaryNumber)
{
    imaginaryNumber = inputDouble("Enter a imaginary number: ");
}

void NegatecomplexNumber( double  &realNumber,  double  &imaginaryNumber)
{
    cout << "-(";
    displayOnlyComplexnumber(realNumber, imaginaryNumber);
    realNumber = realNumber / -1;
    imaginaryNumber = imaginaryNumber / -1;

    cout << ") = ";

    displayOnlyComplexnumber(realNumber, imaginaryNumber);
}

void addConstant( double realNumber,  double imaginaryNumber)
{
    double  constNumber = inputDouble("Enter a constant: ");
    cout << constNumber << " + (";

    displayOnlyComplexnumber(realNumber, imaginaryNumber);

    cout << ") = ";
    realNumber += constNumber;

    displayOnlyComplexnumber(realNumber, imaginaryNumber);

}

void subtractConstant( double  realNumber,  double  imaginaryNumber)
{
    double tempReal, tempImaginary;
    double  constNumber = inputDouble("Enter a constant: ");

    tempReal = realNumber;
    tempImaginary = imaginaryNumber;

    cout << constNumber << " - (";

    displayOnlyComplexnumber(tempReal, tempImaginary);
    cout << ") = ";
    tempReal = constNumber- tempReal;

    displayOnlyComplexnumber(tempReal, tempImaginary);

    cout << endl;
    tempReal = realNumber;

    cout <<"(";
    displayOnlyComplexnumber(tempReal, tempImaginary);
    cout << " ) - " << constNumber;

    tempReal = tempReal - constNumber;
    cout << " = ";
    displayOnlyComplexnumber(tempReal, tempImaginary);
}

void multiplyConstant(double realNumber, double imaginaryNumber)
{
    double  constNumber = inputDouble("Enter a constant: ");
    cout << constNumber << " * (";

    displayOnlyComplexnumber(realNumber, imaginaryNumber);

    cout << ") = ";
    realNumber = constNumber * realNumber;
    imaginaryNumber = constNumber * imaginaryNumber;

    displayOnlyComplexnumber(realNumber, imaginaryNumber);
}


void divideConstant(double realNumber, double imaginaryNumber)
{
    double tempReal, tempImaginary;
    double  constNumber = inputDouble("Enter a constant: ");
    tempReal = realNumber;
    tempImaginary = imaginaryNumber;

    cout << constNumber << " / (";
    displayOnlyComplexnumber(tempReal, tempImaginary);
    cout << ") = ";

    tempReal = constNumber / tempReal; 
    tempImaginary = constNumber / tempImaginary;

    displayOnlyComplexnumber(tempReal, tempImaginary);

    cout << endl;
    tempReal = realNumber;
    tempImaginary = imaginaryNumber;

    cout << "(";
    displayOnlyComplexnumber(tempReal, tempImaginary);
    cout << ") / " << constNumber;

    tempReal = tempReal / constNumber;
    tempImaginary = tempImaginary / constNumber;

    cout << " = ";
    displayOnlyComplexnumber(tempReal, tempImaginary);
}


void singleComeplexNumber()
{
     double  realNumber = 0, imaginaryNumber = 0;

    do
    {
        switch (singleComeplexNumberMenuOption())
        {
        case 0: return; break;
        case 1: inputRealnumber(realNumber); break;
        case 2: inputImaginaryNumber(imaginaryNumber); break;
        case 3: displayComplexnumber(realNumber, imaginaryNumber); break;
        case 4: NegatecomplexNumber(realNumber, imaginaryNumber); break;
        case 5: addConstant(realNumber, imaginaryNumber); break;
        case 6: subtractConstant(realNumber, imaginaryNumber); break;
        case 7: multiplyConstant(realNumber, imaginaryNumber); break;
        case 8: divideConstant(realNumber, imaginaryNumber); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

//Precondition:none
//PostCondition:displays the main menu
 int  complexNumbersMenuOption()
{
    cout << endl << "Complex Numbers";
    cout << endl << "==========================================";
    cout << endl << "1. A Complex Number";
    cout << endl << "2. Multiple Complex Numbers";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
     int  options = inputInteger("Options: ", 0, 2);
    cout << endl << endl << endl;
    return options;
}

void complexNumbers()
{
    do
    {
        switch (complexNumbersMenuOption())
        {
        case 0: return; break;
        case 1: singleComeplexNumber(); break;
        case 2: multipleComplexNumbers(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
