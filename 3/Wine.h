#pragma once
#include"Drink.h"

class Wine : public Drink {
public:
	Wine() : m_year(1997){}
	Wine(int year): m_year(year){}

	virtual void prepare() = 0;
	virtual std::string getName() { return "just ordinary wine!"; }
protected:
	int m_year;
};
