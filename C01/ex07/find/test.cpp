#include <iostream>
#include <string>

int main()
{
	std::string str("There are two needles in this haystack with needles.");
	std::string str2("needle");

	std::size_t found = str.find(str2);
	if (found != std::string::npos)
		std::cout << "first 'needle' found at : " << found << '\n';

	found = str.find("needles are small", found + 1, 6);
	if (found != std::string::npos)

}
