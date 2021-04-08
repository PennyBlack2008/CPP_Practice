#include "Convert.hpp"

/*
literal must be "Char, Int, Float, Double". And Decimal.

char : 'c', 'a'... non displayalbe characters is prohibited. notification required.
*/

int main(int argc, char* argv[])
{
	double input;

	if (argc != 2)
	{
		std::cerr << "Wrong Arguments\n" << std::endl;
		return (0);
	}
	
	try
	{
		std::cout << "------------ is real number --------------\n";
		input = std::stod(argv[1]);  // 문자열을 실수로 변환
	}
	catch(const std::exception& e)  // 실수로 변환할수 없는 문자가 들어오면
	{
		std::cerr << "Invalid Argument" << std::endl;
		return 0;
	}

	Convert C(argv[1], input);
	try
	{
		std::cout << "----------- convert into char --------------\n";
		C.toChar();  // char로 변환
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "----------- convert into int --------------\n";
		C.toInt();  // int로 변환
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "----------- convert into float --------------\n";
		C.toFloat();  // float로 변환
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "----------- convert into double --------------\n";
		C.toDouble();  // double로 변환
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}