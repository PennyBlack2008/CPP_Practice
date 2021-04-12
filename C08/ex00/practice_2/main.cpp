#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> vec1(5);
	std::vector<char> vec2(5);

	for (unsigned int i = 0; i < vec1.size(); i++)
		vec1[i] = i + 1;

	for (unsigned int i = 0; i < vec2.size(); i++)
		vec2[i] = 'a' + i;

	try
	{
		easyfind(vec1, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::string(30, '-') << std::endl;
	try
	{
		easyfind(vec2, 'z');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		easyfind(vec2, 'c');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
