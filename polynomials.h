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

void inputTerms(int &TermNumberOne)
{
	TermNumberOne = inputInteger("\nEnter number of terms for the the polynomial: ", 1, 100);
}

void SpecifyCoefficients(Polynomial onlyPolynomial, int &TermNumberOne)
{

	for (int i = 1; i <= TermNumberOne; i++) {
		//int TermsOne;

		int TermsOne = inputInteger("Add coeffecient for term: ");
		int TermOneDegree;
		TermOneDegree = TermNumberOne - i;
		onlyPolynomial.addTerm(TermOneDegree, TermsOne);
	}
}

void evaluateExpression(Polynomial onlyPolynomial)
{

}

void Derive(Polynomial &onlyPolynomial)
{
	Polynomial derived;
	cout << onlyPolynomial << endl;
	derived.derive(onlyPolynomial);
	cout << derived << endl;
}

void intergrate(Polynomial onlyPolynomial)
{

}

void singlePolynomial()
{
    do
    {
        switch (singlePolynomialMenuOption())
        {
        case 0: return; break;
        case 1: inputTerms(TermNumberOne); break;
        case 2: SpecifyCoefficients(onlyPolynomial, TermNumberOne); break;
        case 3: evaluateExpression(onlyPolynomial); break;
        case 4: Derive(onlyPolynomial); break;
        case 5: intergrate(onlyPolynomial); break;
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
