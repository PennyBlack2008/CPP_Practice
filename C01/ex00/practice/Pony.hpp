#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class	Pony
{
	private:
		std::string mName;
	public:
		Pony(std::string mName);
		~Pony();
};

#endif
