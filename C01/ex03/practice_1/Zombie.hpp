#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void		announce(void);
		void		initZombie(std::string name, std::string type);
	private:
		std::string mName;
		std::string mType;
};

#endif
