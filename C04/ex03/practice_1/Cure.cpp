#include "Cure.hpp"

Cure::Cure(void)
	:AMateria("ice")
{
}

AMateria*	Cure::clone() const
{

}

void		Cure::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName();
}

