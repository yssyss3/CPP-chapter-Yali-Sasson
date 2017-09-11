#pragma once
#include "RedWine.h"
#include<string>

class ChadeauMargot : public RedWine {
public:
	ChadeauMargot(){}
	ChadeauMargot(int year) : RedWine(year) {}
	std::string getName() { return std::string("Chadeau Margot (") + std::to_string(m_year) + std::string(")"); }

};
