#include "A.hpp"

void	A::call(B* moduleB)
{
	std::cout << "moduleB" << std::endl;
}

void	A::printA(void)
{
	std::cout << "A::printA" << std::endl;
}