#include <iostream>
#include <string>

int main()
{
	//                  0123456789012345678901
	std::string base = "this is a test string.";
	std::string str2 = "n example";

	std::string str = base;
	str.replace(9, 4, str2);

	std::cout << str << '\n';
	return 0;
}