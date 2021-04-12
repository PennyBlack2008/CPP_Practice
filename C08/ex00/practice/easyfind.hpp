#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>

class	Easyfind
{
public:
	class NotFoundException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
private:
};

template<typename T>
int		easyfind(T fp, int sp)
{
	int found;

	fp.find(sp);
	if (found != std::string::npos)
		throw NotFoundException();
	return (found);
}

#endif