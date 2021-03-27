#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <time.h>

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce(void);
	private:
		Zombie	*mmsZom;
		int		n;
};

#endif
