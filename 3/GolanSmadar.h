#pragma once
#include "WhiteWine.h"
#include<string>

class GolanSmadar : public WhiteWine {
public:
	GolanSmadar(){}
	GolanSmadar(int year) : WhiteWine(year) {}
	std::string getName() { return std::string("Golan Smadar (") + std::to_string(m_year) + std::string(")"); }

};
