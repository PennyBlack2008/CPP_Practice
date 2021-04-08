#ifndef CONVERT_HPP
# define CONVERT_HPP

class	Convert
{
public:
	Convert(const std::string& literal);
	Convert(const Convert& other);
	~Convert(void);

	Convert&			operator=(const Convert& other);

	const std::string&	GetType(void) const;
	void				SetType(std::string& type);
	const std::string&	GetLiteral(void) const;
private:
	Convert(void);
	const std::string	mLiteral;
	std::string			mType;
	char				mNumChar;
	int					mNumInt;
	float				mNumFloat;
	double				mNumDouble;
};

#endif