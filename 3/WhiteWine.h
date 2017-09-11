#pragma once
#include "Wine.h"
#include <string>


class WhiteWine : public Wine {
public:
	WhiteWine() :Wine() {}
	WhiteWine(int year) : Wine(year) {}

	std::string getName() { return "just an Ordinary white Wine"; }
	void prepare() { std::cout << "You pour it into a glass after cooling it" << std::endl; }
};