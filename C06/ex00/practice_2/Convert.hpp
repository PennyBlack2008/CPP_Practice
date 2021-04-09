#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class	Convert
{
public:
	Convert(void);
	Convert(const std::string& literal);
	Convert(const Convert& other);
	~Convert(void);

	Convert&			operator=(const Convert& other);

	const int&	GetType(void) const;
	// void				SetType(std::string& type);
	const std::string&	GetLiteral(void) const;
	bool				isTwice(const std::string& str, const char needle) const;
	void				DetectType(void);
	enum Type
	{
		IMPOSSIBLE,
		CHAR,
		INT,
		FLOAT,
		DOUBLE
	};

	class ImpossibleException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
private:
	std::string			mLiteral;
	int					mType;
};

#endif