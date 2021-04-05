#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria;
class ICharacter;

# include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(const std::string& type);
	AMateria(const AMateria& other);
	virtual ~AMateria(); // <-- 가상 함수가 하나라도 있으면 소멸자는 virtual
	
	AMateria&			operator=(const AMateria& other);

	const std::string&	getType() const; //Returns the materia type
	unsigned int		getXP() const; //Returns the Materia's XP
	void				setXP(const int xp);

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
protected:
	unsigned int		_xp;
	std::string			mType;
private:
	AMateria(void);
};

#endif