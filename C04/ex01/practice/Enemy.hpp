#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class	Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string& getType(void) const;
		int getHP() const;
		
		virtual void takeDamage(int);
	private:
};

#endif