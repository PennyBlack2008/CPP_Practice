#ifndef CONVERTCHAR_HPP
# define CONVERTCHAR_HPP

# include "Convert.hpp"
# include <sstream>

class	ConvertChar : public Convert
{
public:
	ConvertChar(void);
	ConvertChar(const std::string& literal);
	ConvertChar(const ConvertChar& other);
	~ConvertChar(void);
	ConvertChar&		operator=(const ConvertChar& other);
	
	void	Display(void);
	char	GetValue(void);
	void	Calculate(void);
	class NonDisplayableException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
private:
	char		mValue;
};

#endif