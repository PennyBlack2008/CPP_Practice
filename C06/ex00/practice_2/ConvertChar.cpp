#include "ConvertChar.hpp"

ConvertChar::ConvertChar(void)
	: Convert()
{
}

ConvertChar::ConvertChar(const std::string& literal)
	: Convert(literal)
{
	Calculate();
}

ConvertChar::ConvertChar(const ConvertChar& other)
	: Convert(other)
{
	*this = other;
}

ConvertChar::~ConvertChar(void)
{
}

ConvertChar&		ConvertChar::operator=(const ConvertChar& other)
{
	mValue = other.mValue;
	return (*this);
}

void				ConvertChar::Calculate(void)
{
	if (GetType() == CHAR)
	{
		try
		{
			mValue = static_cast<char>(std::stoi(str));
		}
		catch(const std::exception& e)
		{
			std::cout << "catched exception" << std::endl;
			// if (str.length() == 1)
			// {
			// 	mValue = str.at(0);
			// }
		}
	}
	else if (GetType() == INT)
	{
		mValue = static_cast<char>(std::stoi(str));
	}
	else if (GetType() == FLOAT)
	{
		std::string			pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};
		std::stringstream	ss;
		float				tmp = std::stof(GetLiteral());
		ss << tmp;
		for (int i = 0; i < 8; i++)
		{
			if (ss.str().compare(pseudoLiterals[i]) == 0)
			{
				throw ImpossibleException();
			}
		}
		mValue = static_cast<char>(tmp);
	}
	else if (GetType() == DOUBLE)
	{
		std::string			pseudoLiterals[8] = {"inff", "-inff", "+inff", "nanf", "inf", "-inf", "+inf", "nan"};
		std::stringstream	ss;
		double				tmp = std::stod(str);
		ss << tmp;
		for (int i = 0; i < 8; i++)
		{
			if (ss.str().compare(pseudoLiterals[i]) == 0)
			{
				throw ImpossibleException();
			}
		}
		mValue = static_cast<char>(tmp);
	}
	else
	{
		throw ImpossibleException();
	}
	if (std::isprint(mValue) == false)
	{
		throw NonDisplayableException();
	}
}

char				ConvertChar::GetValue(void)
{
	return (mValue);
}

const char*			ConvertChar::NonDisplayableException::what(void) const throw()
{
	return ("Non displayable");
}