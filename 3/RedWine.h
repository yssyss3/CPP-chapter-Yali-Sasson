#pragma once
#include "Wine.h"

class RedWine : public Wine {
public:
	RedWine() :Wine() {}
	RedWine(int year) : Wine(year) {}

	std::string getName() { return "just an Ordinary red Wine"; }
	void prepare() { std::cout << "You pour it into a glass at room temperature (16-18)" << std::endl;; }
};
