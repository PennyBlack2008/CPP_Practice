#include "Poro.hpp"

Poro::Poro(void)
	: Victim()
{
	std::cout << "Hi i am poro." << std::endl;
}

Poro::Poro(const std::string& name)
	: Victim(name)
{
	std::cout << "Hi i am poro." << std::endl;
}

Poro::Poro(const Poro& other)
	: Victim(other)
{
	*this = other;
	std::cout << "Hi i am poro." << std::endl;
}

Poro::~Poro(void)
{
	std::cout << "Poro bye" << std::endl;
}

void	Poro::getPolymorphed(void) const
{
	std::cout << GetName() << " has been turned into a rock!" << std::endl;
}

Poro&   Poro::operator=(const Poro& other)
{
	SetName(other.GetName());
	return (*this);
}