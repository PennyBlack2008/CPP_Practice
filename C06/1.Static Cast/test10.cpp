#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi

int main()
{
	std::string num = "1";
	int num1;
	char num2;
	std::cout << "Getliteral is " << num << std::endl;
	num1 = std::stoi(num, nullptr, 10);
	// std::cout << "stoi(Getliteral) is " << num1 << std::endl;
	// num2 = static_cast<char>(std::stoi(num), 10);
	// std::cout << "static_cast(stoi(Getliteral)) is " << num2 << std::endl;
	return (0);
}