#include "fraction.h"


Fraction::Fraction(int nominator, int denominator):m_nominator(nominator){
	if (denominator == 0) {
		throw std::exception("denominator cannot be 0");
		std::cout << "divide by 0" << std::endl;
	}
	else {
		m_denominator = denominator;
		reduce();
	}
}

Fraction::~Fraction(){}

int Fraction::getNominator() const{
	return m_nominator;
}
int Fraction::getDenominator() const{
	return m_denominator;
}



Fraction Fraction::operator+(const Fraction & other) const {
	int denominator = m_denominator * other.getDenominator();
	int nominator = (m_nominator * other.getDenominator()) + (other.getNominator() * m_denominator);
	Fraction f = Fraction(nominator, denominator);
	f.reduce();
	return f;
}
Fraction Fraction::operator+(const int & other) const {
	int nominator = m_nominator + (other*m_denominator);
	Fraction f = Fraction(nominator, m_denominator);
	f.reduce();
	return f;
}



Fraction Fraction::operator-(const Fraction & other) const {
	int denominator = m_denominator * other.getDenominator();
	int nominator = (m_nominator * other.getDenominator()) - (other.getNominator() + m_denominator);
	Fraction f = Fraction(nominator, denominator);
	f.reduce();
	return f;
}
Fraction Fraction::operator-(const int & other) const {
	int nominator = m_nominator - (other*m_denominator);
	Fraction f = Fraction(nominator, m_denominator);
	f.reduce();
	return f;
}
Fraction Fraction::operator-() const {
	Fraction f = Fraction(-m_nominator, m_denominator);
	f.reduce();
	return f;
}


Fraction Fraction::operator*(const Fraction & other) const {
	Fraction f = Fraction(m_nominator*other.getNominator(), m_denominator*other.getDenominator());
	f.reduce();
	return f;
}
Fraction Fraction::operator*(const int & other) const {
	Fraction f = Fraction(m_nominator*other, m_denominator);
	f.reduce();
	return f;
}



Fraction Fraction::operator/(const Fraction & other) const {
	Fraction f =  Fraction(m_nominator*other.getDenominator(), m_denominator*other.getNominator());
	f.reduce();
	return f;
}
Fraction Fraction::operator/(const int & other) const {
	Fraction f = Fraction(m_nominator, m_denominator*other);
	f.reduce();
	return f;
}

std::ostream& operator<< (std::ostream &out, const Fraction &frac)
{
	out << frac.m_nominator << '/' << frac.m_denominator;
	return out;
}

Fraction::operator float() const {
	return (float)m_nominator / (float)m_denominator;
}

void Fraction::reduce() {
	for (int i = 2; i <= (int)abs(m_nominator) && i <= (int)abs(m_denominator); i++) {
		if (m_denominator%i == 0 && m_nominator%i == 0) {
			m_nominator /= i;
			m_denominator /= i;
			reduce();
		}
	}
}
