#include "Fixed.hpp"

Fixed::Fixed()
	: mVal(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called\n";
	this->mVal = val << this->mBits; // 2^8 곱하기
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called\n";
	this->mVal = roundf(val * (1 << mBits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called\n";
	this->mVal = ref.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->mVal);
}

void	Fixed::setRawBits(int const raw)
{
	this->mVal = raw;
}

int		Fixed::toInt(void) const
{
	return (this->mVal >> mBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->mVal / (1 << mBits));
}

std::ostream& operator<<(std::ostream &os, const Fixed& ref)
{
	return (os << ref.toFloat());
}
