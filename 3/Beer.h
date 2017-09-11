#include "Drink.h"

class Beer : public Drink {
public:

	Beer::Beer(std::string name) : Drink(), m_name(name) {}
	void prepare() {std::cout << "All you need to do is pour it into a glass and serve" << std::endl;}
	std::string getName() {return m_name;}

private:
	std::string m_name;
};