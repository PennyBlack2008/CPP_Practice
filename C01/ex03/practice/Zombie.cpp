#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout<<name<<"is died\n";
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")>";
	std::cout << " Braiiiiiiiinnnnnnsssss....\n";
}

void	Zombie::initZombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}
