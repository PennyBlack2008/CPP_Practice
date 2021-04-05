#include "AMateria.hpp"

AMateria::AMateria
	: _xp(0)
	, mType("undefined")
{
}

AMateria::AMateria(std::string const & type)
	: _xp(0)
	, mType(type)
{
}

virtual void		AMateria::use(ICharacter& target)
{
	_xp += 10;
}