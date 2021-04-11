#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void	func(T const& name)
{
	std::cout << "my name is " << name << std::endl;
}

template <typename T>
void	iter(T* array, int len, void (*f)(T const &ref))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}
#endif
