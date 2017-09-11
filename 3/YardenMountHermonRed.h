#pragma once
#include "RedWine.h"
#include<string>

class YardenMountHermonRed : public RedWine {
public:
	YardenMountHermonRed(){}
	YardenMountHermonRed(int year) : RedWine(year) {}
	std::string getName() { return std::string("Yarden Mount Hermon Red (") + std::to_string(m_year) + std::string(")"); }

};
