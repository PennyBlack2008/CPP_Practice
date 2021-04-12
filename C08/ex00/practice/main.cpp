#include "easyfind.hpp"

const char*	Convert::NotFoundException::what(void) const throw()
{
	return ("Couldn't find it\n");
}

int main(void)
{
	
	return (0);
}