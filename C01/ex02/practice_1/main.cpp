#include "ZombieEvent.hpp"

int main(void)
{
	Zombie	z1("jinbkim", "genius");
	z1.announce();

	ZombieEvent ze1;
	ze1.setZombieType("womanizer");
	Zombie	*z2 = ze1.newZombie("ralo");
	z2->announce();
	delete(z2);

	ZombieEvent ze2;
	ze2.setZombieType("programmer");
	ze2.randomChump();
	return (0);
}
