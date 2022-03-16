#pragma once

int singlePolynomialMenuOption()
{
    cout << endl << "Single Polynomial";
    cout << endl << "==========================================";
    cout << endl << "1. Enter the number of terms";
    cout << endl << "2. Specify the coefficients";
    cout << endl << "3. Evaluate epxression";
    cout << endl << "4. Solve for the derivative";
    cout << endl << "5. Solve for the integral";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 2);
    cout << endl << endl << endl;
    return options;
}

void inputpolynomial()
{
int NumberOfTerms = inputInteger("Enter the number of terms you would like: ", 1, 100);
}

void changeCoefficients()
{
for (int i = 1; i <= NumberOfTerms; i++) {

		int TermsOne = inputInteger("Add coeffecient for term: ");
		int TermOneDegree;
		TermOneDegree = NumberOfTerms - i;
	}
}

void evaluateExpression()
{

}

void Derive()
{
	Polynomial derived;
	cout << onlyPolynomial << endl;
	derived.derive(onlyPolynomial);
	cout << derived << endl;
}

void intergrate()
{

}

void singlePolynomial()
{
    do
    {
        switch (singlePolynomialMenuOption())
        {
        case 0: return; break;
        case 1: inputpolynomial(); break;
        case 2: changeCoefficients(); break;
        case 3: evaluateExpression(); break;
        case 4: Derive(); break;
        case 5: intergrate(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}


void multiplePolynomials()
{
 
}



//Precondition:none
//PostCondition:displays the main menu
int polynomialsMenuOption()
{
    cout << endl << "Chapter 4: Assignment by Julian Espinoza";
    cout << endl << "==========================================";
    cout << endl << "1. A Polynomial";
    cout << endl << "2. Multiple Polynomials";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 2);
    cout << endl << endl << endl;
    return options;
}

void polynomials()
{
    do
    {
        switch (polynomialsMenuOption())
        {
        case 0: return; break;
        case 1: singlePolynomial(); break;
        case 2: multiplePolynomials(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}
