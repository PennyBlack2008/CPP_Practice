#include "Convert.hpp"

Convert::Convert(std::string str, double value)
	: _str(str)
	, double(value)
{
};

Convert::Convert(const Convert& other)
{
	*this = ref;
}

Convert&	Convert::operator=(const Convert& other)
{
	if (this == &other)
		return (*this);
	_str = other.getStr();
	_double = other.getDouble();
	return (*this);
}

Convert::~Convert()
{
}

std::string Conver::getStr() const
{
	return (_str);
}

double		Convert::getDouble() const
{
	return (_double);
}

void		Convert::toChar()
{
	int integer;

	std::cout << "char: ";
	integer = static_cast<int>(_double);
	if (integer - _double != 0)
		throw Convert::ImpossibleException();
	else if (integer >= 32 && integer <= 126)
		std::cout << "'" << static_cast<char>(_double) << "'" << std::endl;
	else
		throw Convert::NonDisplayalbeExeception();
}

void		Convert::toInt()
{
	long comp;

	std::cout << "int: ";
	if (std::isnan(_double) || std::isinf(_double))
		throw Convert::ImpossibleException();
	comp = stol(_str);
	if (comp > INT_MAX || comp < INT_MIN)
}