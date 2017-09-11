#pragma once
#include "WhiteWine.h"
#include <string>
class CarmelEmeraldRiesling : public WhiteWine
{
public:
	CarmelEmeraldRiesling(){}
	CarmelEmeraldRiesling(int year) : WhiteWine(year){}
	std::string getName() { return std::string("Carmel Emerald Riesling (") + std::to_string(m_year) + std::string(")"); }
	
};

