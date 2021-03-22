#include "Pony.hpp"

Pony::Pony(const std::string& name)
	: mName(name)
{
	std::cout << mName << " was born!" << std::endl;
}

Pony::~Pony()
{
	std::cout << mName << " went home. Bye~ Pony :)";
}

void Pony::Cry(void)
{
	std::cout << mName << " NEIGH~ " << std::endl;
}

void Pony::Run(void)
{
	std::cout << mName << " is running ==3 ==3" << std::endl;
}
