#include "ConvertChar.hpp"

ConvertChar::ConvertChar(void)
	: Convert()
{
}

ConvertChar::ConvertChar(const std::string& literal)
	: Convert(literal)
{
}

ConvertChar::ConvertChar(const ConvertChar& other)
	: Convert(other)
{
	*this = other;
}

ConvertChar::~ConvertChar(void)
{
}

ConvertChar&		operator=(const ConvertChar& other)
{
	return (*this);
}

void				ConvertChar::Display(void)
{
	if (GetType() == CHAR)
	{
		
	}
}

const char*			ConvertChar::NonDisplayableException::what(void) const throw()
{
	return ("Non displayable");
}