#include "ConvertChar.hpp"
#include "ConvertInt.hpp"
#include "ConvertFloat.hpp"
#include "ConvertDouble.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::string str(argv[1]);

		try
		{
			std::cout << "char: ";
			char c = ConvertChar(str).GetValue();
			std::cout << "'" << c << "'" << std::endl;
		}
		catch(const ConvertChar::NonDisplayableException& e)
		{
			std::cout << "Non displayable" << '\n';
		}
		catch(const std::exception& e)
		{
			std::cout << "Impossible" << '\n';
		}

		try
		{
			std::cout << "int: ";
			std::cout << ConvertInt(str).GetValue() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << '\n';
		}

		try
		{
			std::cout << "float: ";

			std::stringstream	ss;
			ss << ConvertFloat(str).GetValue();
			if (ss.str().find('.') == std::string::npos)
			{
				std::string	pseudoL
			}
		}
	}
	return (0);
}