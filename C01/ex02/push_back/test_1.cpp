#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	int num = 0;
	while (num < 3)
	{
		str.push_back('a');
		num++;
	}
	std::cout << str << std::endl;
	return (0);
}
