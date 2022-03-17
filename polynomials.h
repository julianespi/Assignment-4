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

//PreCondition: NA
//PostCondition: User input terms for Polynomial

void inputTerms(int &TermNumberOne)
{
	TermNumberOne = inputInteger("\nEnter number of terms for the the polynomial: ", 1, 100);
}

//PreCondition: adding coefficients from Number of terms based on user
//PostCondition: places a coefficient based on input

void SpecifyCoefficients(Polynomial onlyPolynomial, int& TermNumberOne, int& TermOneDegree)
{

    for (int i = 1; i <= TermNumberOne; i++) {
        

        int TermsOne = inputInteger("Add coeffecient for term: ");
        TermOneDegree = 0;
        TermOneDegree = TermNumberOne - i;
        onlyPolynomial.addTerm(TermOneDegree, TermsOne);
    }

    cout << "\n" << onlyPolynomial;
}

//PreCondition: User inputs a value to solve
//PostCondition: Solves the polynomial by evaluating by substitution

void evaluateExpression(Polynomial onlyPolynomial, int& TermNumberOne, int& TermOneDegree)
{
    
    int evaluate = inputInteger("Enter an X value: ");

    int evaluation = 0;
    
    

    for (int i = 1; i <= TermNumberOne; i++) {     
        TermOneDegree = 0;
        TermOneDegree = TermNumberOne - i;
        evaluation =  pow(evaluate, TermOneDegree);
        
      
        cout << evaluation << endl;
        
    }
}

//PreCondition: reads from user input polynomial
//PostCondition: Calculates derivative of function
void Derive(Polynomial &onlyPolynomial)
{
	Polynomial derived;
	cout << onlyPolynomial << endl;
	derived.derive(onlyPolynomial);
	cout << derived << endl;
}
//PreCondition: reads from user input polynomial
//PostCondition: Calculates integral of function
void intergrate(Polynomial onlyPolynomial)
{
    Polynomial Integrated;
    cout << onlyPolynomial << endl;
    Integrated.intergrate(onlyPolynomial);
    cout << Integrated << endl;
}
//PreCondition: user option from menu option
//PostCondition: takes user to desired option
void singlePolynomial()
{
   int TermNumberOne;
        int TermOneDegree;
        Polynomial onlyPolynomial;
        do
        {
            switch (SinglePolynomialMenuOption())
            {
            case 0: return; break;
            case 1: inputTerms(TermNumberOne); break;
            case 2: SpecifyCoefficients(onlyPolynomial, TermNumberOne, TermOneDegree); break;
            case 3: evaluateExpression(onlyPolynomial, TermNumberOne, TermOneDegree); break;
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
