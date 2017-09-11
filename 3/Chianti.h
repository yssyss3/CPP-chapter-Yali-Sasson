#pragma once
#include "RedWine.h"
#include<string>

class Chianti : public RedWine {
public:
	Chianti(){}
	Chianti(int year) : RedWine(year) {}
	std::string getName() { return std::string("Chianti (") + std::to_string(m_year) + std::string(")"); }

};
