#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
public:
	AMateria(std::string const & type);
	~AMateria();
	const std::string&	getType() const; //Returns the materia type
	unsigned int		getXP() const; //Returns the Materia's XP
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
protected:
	unsigned int		_xp;
	std::string			mType;
};

#endif