#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// # include <algorithm>
# include <iostream>
# include <string>

class NotFoundError: public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Not Found.");
	}
};

template<typename T>
void		easyfind(T t, int value)
{
	typename T::iterator it = std::find(t.begin(), t.end(), value);
	if (it == t.end())
		throw NotFoundError();
	std::cout << "Found." << std::endl;
}

#endif
