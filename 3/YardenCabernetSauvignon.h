#pragma once
#include "RedWine.h"
#include<string>

class YardenCabernetSauvignon : public RedWine {
public:
	YardenCabernetSauvignon(){}
	YardenCabernetSauvignon(int year) : RedWine(year) {}
	std::string getName() { return std::string("Yarden Cabernet Sauvignon (") + std::to_string(m_year) + std::string(")"); }

};
