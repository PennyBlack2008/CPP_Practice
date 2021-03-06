#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->type = "no type";
	this->type = "no name";
}

Zombie::~Zombie(void)
{
}

Zombie::Zombie(const std::string& type, const std::string& name)
	: type(type)
	, name(name)
{
}

void	Zombie::announce(void) const
{
	std::cout << "<" << name << " (" << type << ")>" << " Braiiiiiiiiiiiiinsssss..." << std::endl;
}

void	Zombie::SetType(const std::string& type)
{
	this->type = type;
}

void	Zombie::SetName(const std::string& name)
{
	this->name = name;
}
