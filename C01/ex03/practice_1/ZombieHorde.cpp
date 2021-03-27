#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(clock());
	std::string name;
	std::string type[3] = {"student", "baeksu", "programmer"};
	int			size;

	this->n = n;
	mmsZom = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		name.clear();
		size = rand() % 10 + 4;
		for (int j = 0; j < size; j++)
			name += rand() % 26 + 'a';
		mmsZom[i].initZombie(name, type[rand() % 3]);
	}
}

void		ZombieHorde::announce(void)
{
	for (int i = 0; i < n; i++)
		mmsZom[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "before ZombieHorde delete!\n";
	delete[] mmsZom;
	std::cout << "after ZombieHorde delete!\n";
}
