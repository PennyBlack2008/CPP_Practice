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
int		easyfind(T* fp, int sp)
{
	istd::vector<int> vec;
	int *it;
	for (int i = 0; i < vec.size(); ++i)
		vec.push_back(i);
	for (it = &fp[0]; it != fp[vec.size()]; it++)
		cout << itr << " ";
	cout << "\n";
	return (found);
}

#endif