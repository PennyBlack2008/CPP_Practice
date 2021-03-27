#include "Zombie.hpp"

Zombie::Zombie()
	:mName("default")
	,mType("default")
{
}

Zombie::~Zombie()
{
	std::cout << mName << "is died\n";
}

void	Zombie::announce(void)
{
	std::cout << "<" << mName << " (" << mType << ")>";
	std::cout << "Braiiiiiiinnnnsss...\n";
}

void	Zombie::initZombie(std::string name, std::string type)
{
	this->mName = name;
	this->mType = type;
}
