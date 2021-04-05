#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	Character : public ICharacter
{
public:
	Character(const std::string& name);
	Character(const Character& other);
	~ICharacter() {}
	const std::string&	getName() const = 0;
	void				equip(AMateria* m) = 0;
	void				unequip(int idx) = 0;
	void				use(int idx, ICharacter& target) = 0;
private:
	Character(void);
	int					mCount;
	std::string			mName;
	AMateria*			mInventory[4];
};

#endif