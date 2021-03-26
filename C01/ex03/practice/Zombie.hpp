#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
		std::string type;
	public:
		~Zombie();
		void	announce(void);
		void	initZombie(std::string name, std::string type);
};

#endif
