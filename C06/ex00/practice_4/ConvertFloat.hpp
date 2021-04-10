#ifndef CONVERTFLOAT_HPP
# define CONVERTFLOAT_HPP

# include "Convert.hpp"

class ConvertFloat : public Convert
{
public:
	ConvertFloat(const std::string& str);
	ConvertFloat(const ConvertFloat& other);
	virtual ~ConvertFloat(void);

	ConvertFlaot&	operator=(const ConvertFlaot& other);
	float			GetValue(void) const;
private:
	ConvertFlaot(void);
	float			mValue;
};

#endif
