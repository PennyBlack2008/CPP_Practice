int main(void)
{
	Zombie z1("jinbkim", "genius");
	z1.announce();

	ZombieEvent ze1;
	ze1.setZombieType("Womanizer");
	Zombie *z2 = ze1.newZombie("Ralo");
	z2->announce();
	delete(z2);

	ZombieEvent ze2;
	ze2.setZombieType("Random guy");
	ze2.randomChump();
	return (0);
}
