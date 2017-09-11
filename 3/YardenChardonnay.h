#pragma once
#include "WhiteWine.h"
#include <string>

class YardenChardonnay : public WhiteWine{
public:
	YardenChardonnay(){}
	YardenChardonnay(int year) : WhiteWine(year) {}
	std::string getName() { return std::string("Yarden Chardonnay (") + std::to_string(m_year) + std::string(")"); }

};