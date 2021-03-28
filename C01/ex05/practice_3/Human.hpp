#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>


class	Human
{
	public:
		Human();
		~Human();
		const Brain&	getBrain(void) const;
		std::string		identify(void) const;
	private:
		const Brain		mBrain;
};

#endif
