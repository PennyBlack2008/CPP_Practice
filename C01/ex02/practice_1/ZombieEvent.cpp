#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name, type);
	return (z);
}

void	ZombieEvent::randomChump(void)
{
	srand(clock());

	std::string name;
	int size = rand() % 10 + 4;
	for (int i = 0; i < size; i++)
		name += rand() % 26 + 'a';
	Zombie z(name, type);
	z.announce();
}
