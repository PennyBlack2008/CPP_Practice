#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(const std::string& type);
		Zombie*	newZombie(const std::string& name);
		Zombie* randomChump(void);

	private:
		std::string type;
};

#endif
