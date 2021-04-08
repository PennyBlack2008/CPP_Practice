#include <iostream>
#include <string>

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
			ConvertChar.display();
		}
		catch(const ConvertChar::NonDisplayableException& e)
		{
			
		}
		catch(const std::exception& e)
		{
			
		}
	}
	{
		ConvertInt(argv[1]);
		try
		{
			ConvertInt.display();
		}
		catch
		{
			std::cout << "Non displayable\n";
		}
	}
	CovertFloat(argv[1]);
	ConvertDouble(argv[1]);
	
	return (0);
}