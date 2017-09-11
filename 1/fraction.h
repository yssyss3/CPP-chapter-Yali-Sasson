#pragma once
#include <iostream>
class Fraction {
public:
	Fraction(int nominator, int denominator);
	~Fraction();

	int getNominator() const;
	int getDenominator() const;

	Fraction operator+(const Fraction & other) const;
	Fraction operator+(const int & other) const;

	Fraction operator-(const Fraction & other) const;
	Fraction operator-(const int & other) const;
	Fraction operator-() const;


	Fraction operator*(const Fraction & other) const;
	Fraction operator*(const int & other) const;

	Fraction operator/(const Fraction & other) const;
	Fraction operator/(const int & other) const;

	friend std::ostream& operator<< (std::ostream &out, const Fraction &frac);

	operator float() const;

private:
	void reduce();
	int m_nominator;
	int m_denominator;
};
