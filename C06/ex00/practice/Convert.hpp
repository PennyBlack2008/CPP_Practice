#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>

class	Convert
{
public:
	Convert(std::string str, double value);
	Convert(const Convert& other);
	~Convert();
	Convert& operator=(const Convert& other);

	std::string	getStr() const;
	double		getDouble() const;

	class ImpossibleException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class NonDisplayableException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	}

	void		toChar();
	void		toInt();
	void		toFloat();
	void		toDouble();
private:
	Convert(void);
	std::string _str;
	double _double;
};

#endif