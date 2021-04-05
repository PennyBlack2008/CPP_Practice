#include "AMateria.hpp"

AMateria::AMateria()
	: _xp(0)
	, mType("Undefined Type")
{
}

AMateria::AMateria(std::string const & type)
	: _xp(0)
	, mType(type)
{
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::~AMateria(void)
{
}

AMateria&			AMateria::operator=(const AMateria& other)
{
	_xp = other._xp;
	return (*this);
}

const std::string&	AMateria::getType() const
{
	return (mType);
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

void				AMateria::setXP(const int xp)
{
	_xp = xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}