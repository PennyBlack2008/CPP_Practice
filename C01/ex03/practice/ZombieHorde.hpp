#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie	*zom;
		int		n;

	public:
		ZombieHorde(int n);
		void	announce(void);
		~ZombieHorde();
};

#endif
