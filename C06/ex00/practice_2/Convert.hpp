#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class	Convert
{
public:
	Convert(const std::string& literal);
	Convert(const Convert& other);
	~Convert(void);

	Convert&			operator=(const Convert& other);

	const std::string&	GetType(void) const;
	// void				SetType(std::string& type);
	const std::string&	GetLiteral(void) const;
	bool				isTwice(const std::string& str, const char needle) const;
	enum Type
	{
		IMPOSSIBLE,
		CHAR,
		INT,
		FLOAT,
		DOUBLE
	};
private:
	Convert(void);
	const std::string	mLiteral;
	int					mType;
};

#endif