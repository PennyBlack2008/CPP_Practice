#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	val = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& ref)
{
	std::cout << "Copy constructor called\n";
	val = ref.getRawBits();
}

// 연산자 오버로딩
Fixed& Fixed::operator=(const Fixed& ref)
{
	std::cout << "Assignation operator called\n";
	val = ref.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (val);
}

void		Fixed::setRawBits(int const raw)
{
	val = raw;
}
