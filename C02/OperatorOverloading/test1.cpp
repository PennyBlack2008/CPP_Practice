#include <iostream>
#include <iomanip>

int main()
{
	int val = 65;

	std::cout << std::right;
	std::cout << std::setw(10);

	std::cout << val << std::endl;
	std::cout << std::right;
	std::cout << val << std::endl;

	return (0);
}
