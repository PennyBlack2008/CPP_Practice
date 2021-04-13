#include "easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> vec1(5);
	std::vector<char> vec2(5);

	/* 1, 2, 3, 4, 5 를 담는 int vector 컨테이너 */
	for (unsigned int i = 0; i < vec1.size(); i++)
		vec1[i] = i + 1;

	/* a, b, c, d, e 를 담는 char vector 컨테이너 */
	for (unsigned int i = 0; i < vec2.size(); i++)
		vec2[i] = 'a' + i;

	try
	{
		/* 컨테이너에서 5를 찾아라. */
		easyfind(vec1, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::string(30, '-') << std::endl;
	try
	{
		/* a, b, c, d, e 를 갖는 컨테이너에서 z 를 찾아라. */
		easyfind(vec2, 'z');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		/* a, b, c, d, e 를 담는 컨테이너에서 c 를 찾아라. */
		easyfind(vec2, 'c');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
