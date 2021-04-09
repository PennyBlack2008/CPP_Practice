#include <iostream>
#include <string>
#include "ConvertChar.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid argument!\n";
		return (1);
	}
	{
		ConvertChar(argv[1]);
		try
		{
			std::cout << "char: ";
			char c = ConvertChar(argv[1]).GetValue();
			std::cout << "'" << c << "'" << std::endl;
		}
		catch(const ConvertChar::NonDisplayableException& e)
		{
			std::cout << "Non displayable" << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}
	}

	// CovertFloat(argv[1]);
	// ConvertDouble(argv[1]);
	
	return (0);
}