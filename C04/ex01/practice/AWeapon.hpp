#ifndef AWEAPON_HPP
# define AWEAPON_HPP

/*
Weapon has name, cost ap, damage
*/
class	AWeapon
{
private:
public:
	AWeapon(std::string const & name, int apcost, int damage); [...] ~AWeapon();
	std::string [...] getName() const;
	int getAPCost() const;
	int getDamage() const;
	[...] void attack() const = 0;
};

#endif