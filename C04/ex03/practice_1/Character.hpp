#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character : public ICharacter
{
public:
	Character(const std::string& name);
	Character(const Character& other);
	virtual ~Character(void);
	Character&			operator=(const Character& other);
	
	const std::string&	getName() const;
	
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
private:
	Character(void);

	int					mCount;
	std::string			mName;
	AMateria*			mInventory[4];
};

#endif