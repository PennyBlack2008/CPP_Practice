#include "Pony.hpp"

Pony::Pony(std::string mName)
{
	this->mName = mName;
	std::cout<<this->mName<<" pony constructor is called!\n";
}

Pony::~Pony()
{
	std::cout<<this->mName<<" pony destructor is called!\n";
}
