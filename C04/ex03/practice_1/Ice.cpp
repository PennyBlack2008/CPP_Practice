#include "Ice.hpp"

ICE::ICE(void)
	:AMateria("ice")
{
}

AMateria*	ICE::clone() const
{

}

void		Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName();
}

