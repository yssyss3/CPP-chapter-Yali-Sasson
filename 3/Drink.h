#pragma once
#include <iostream>

class Drink {
public:
	virtual void prepare() = 0;

	virtual std::string getName() {
		return "generic drink";
	}
};