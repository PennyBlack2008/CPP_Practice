#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{
public:
	AMateria(std::string const & type);
	virtual ~AMateria(); // <-- 가상 함수가 하나라도 있으면 소멸자는 virtual
	const std::string&	getType() const; //Returns the materia type
	unsigned int		getXP() const; //Returns the Materia's XP
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
protected:
	unsigned int		_xp;
	std::string			mType;
private:
	AMateria(void);
};

#endif