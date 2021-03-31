#include "Fixed.hpp"

Fixed::Fixed()
	: mVal(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called\n";
	this->mVal = ref.getRawBits();
}

// 연산자 오버로딩
Fixed& Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called\n";
	this->mVal = ref.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->mVal);
}

void		Fixed::setRawBits(int const raw)
{
	this->mVal = raw;
}
