#pragma once

#include <iostream>
using namespace std;

class Rational
{
	private:
		int numerator;
		int denominator;
		int gcd(int x, int y);
		int norm;
	public:
		Rational();
		Rational(int wholeNumber);
		Rational(int n, int d);
		Rational(const Rational& R);

		void setNumerator(int n);
		int getNumerator() const;
		void setDenominator(int d);
		int getDenominator() const;

		void normalize();
		Rational operator -();

		friend istream& operator >>(istream& ins, Rational& r);
		friend ostream& operator <<(ostream& outs, const Rational& r);
		friend bool operator ==(const Rational& R1, const Rational& R2);
		friend bool operator !=(const Rational& R1, const Rational& R2);
		friend bool operator <(const Rational& R1, const Rational& R2);
		friend bool operator <=(const Rational& R1, const Rational& R2);
		friend bool operator >(const Rational& R1, const Rational& R2);
		friend bool operator >=(const Rational& R1, const Rational& R2);
		friend Rational operator +(const Rational& R1, const Rational& R2);
		friend Rational operator +(const Rational& R1, const int i);
		friend Rational operator +(const int i, const Rational& R1);
		friend Rational operator -(const Rational& R1, const Rational& R2);
		friend Rational operator -(const Rational& R1, const int i);
		friend Rational operator -(const int i, const Rational& R1);
		friend Rational operator *(const Rational& R1, const Rational& R2);
		friend Rational operator *(const Rational& R1, const int i);
		friend Rational operator *(const int i, const Rational& R1);
		friend Rational operator /(const Rational& R1, const Rational& R2);
		friend Rational operator /(const Rational& R1, const int i);
		friend Rational operator /(const int i, const Rational& R1);
};

int Rational::gcd(int x, int y) {
	if (y == 0)
	return x;
	return gcd(y, x % y);
}

Rational Rational::operator -()
{
	numerator = -numerator;
	return *this;
}

int Rational::getNumerator() const
{
	return numerator;
}

void Rational::setNumerator(int n)
{
	numerator = n;
}

int Rational::getDenominator() const
{
	return denominator;
}

void Rational::setDenominator(int d)
{
	denominator = d;
}

void Rational::normalize()
{
	norm = gcd(numerator, denominator);
	numerator = numerator / normalize;
	denominator = denominator / norm;
	return numerator;
	return denominator;
}

bool operator !=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator != R2.numerator * R1.denominator;
}

bool operator ==(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator == R2.numerator * R1.denominator;
}

bool operator <(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator < R2.numerator* R1.denominator;
}

bool operator <=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator <= R2.numerator * R1.denominator;
}

bool operator >(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator > R2.numerator * R1.denominator;
}

bool operator >=(const Rational& R1, const Rational& R2)
{
	return R1.numerator * R2.denominator >= R2.numerator * R1.denominator;
}

Rational operator +(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() + i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());
	
	return temp;
}

Rational operator +(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() + i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());

	return temp;
}

Rational operator +(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator + R2.numerator * R1.denominator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else if (R1.denominator != 0 && R2.denominator == 0)
	{
		temp.numerator = R1.numerator;
		temp.denominator = R1.denominator;
	}
	else
	{
		temp.numerator = R2.numerator;
		temp.denominator = R2.denominator;
	}
	temp.normalize();
	return temp;
	}

Rational operator -(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() - i * R1.getDenominator());
	temp.setDenominator(R1.getDenominator());
	temp.normalize();
	return temp;
}

Rational operator -(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getDenominator() - R1.getNumerator());
	temp.setDenominator(R1.getDenominator());
	temp.normalize();
	return temp;
}

Rational operator -(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator - R2.numerator * R1.denominator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else if (R1.denominator != 0 && R2.denominator == 0)
	{
		temp.numerator = R1.numerator;
		temp.denominator = R1.denominator;
	}
	else
	{
		temp.numerator = -R2.numerator;
		temp.denominator = R2.denominator;
	}
	temp.normalize();
	return temp;
}
Rational operator *(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.numerator;
		temp.denominator = R1.denominator * R2.denominator;
	}
	else
	{
		temp.numerator = 0;
		temp.denominator = 0;
	}
	temp.normalize();
	return temp;
}

Rational operator *(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator() * i);
	temp.setDenominator(R1.getDenominator());
	temp.normalize();
	return temp;
}

Rational operator *(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getNumerator());
	temp.setDenominator(R1.getDenominator());
	temp.normalize();
	return temp;
}

Rational operator /(const Rational& R1, const Rational& R2)
{
	Rational temp;
	if ((R1.denominator != 0 && R2.denominator != 0))
	{
		temp.numerator = R1.numerator * R2.denominator;
		temp.denominator = R1.denominator * R2.numerator;
	}
	else
	{
		temp.numerator = 0;
		temp.denominator = 0;
	}
	temp.normalize();
	return temp;
}

Rational operator /(const Rational& R1, const int i)
{
	Rational temp;
	temp.setNumerator(R1.getNumerator());
	temp.setDenominator( i * R1.getDenominator());
	temp.normalize();
	return temp;
}

Rational operator /(const int i, const Rational& R1)
{
	Rational temp;
	temp.setNumerator(i * R1.getDenominator());
	temp.setDenominator(R1.getNumerator());
	temp.normalize();
	return temp;
}

istream& operator >>(istream& ins, Rational& r)
{
	cout << "Numerator: ";
	ins >> r.numerator;
	cout << "Denominator: ";
	ins >> r.denominator;
	r.normalize();
	return ins;

}

ostream& operator <<(ostream& outs, const Rational& r)
{
	if (r.denominator == 0 && r.numerator > 0)
		outs << "undefine";
	else
		outs << r.numerator << "/" << r.denominator;
	return outs;
}

Rational::Rational() : numerator(0), denominator(1)
{}
Rational::Rational(int wholeNumber) : numerator(wholeNumber), denominator(1)
{}
Rational::Rational(int n, int d)
{
	if (d == 0)
	{
		numerator = 0;
		denominator = 0;
	}
	else
	{
		numerator = n;
		denominator = d;
	}
}

Rational::Rational(const Rational& R)
{
	numerator = R.numerator;
	denominator = R.denominator;
}
