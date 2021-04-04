#ifndef CHARACTER_HPP
# define CHARACTER_HPP

/*
 Has a name, a number of AP (Action points), 
 and a pointer to AWeapon repre- senting the current weapon.

 Posesses 40 AP at creation, loses the AP corresponding 
 to the weapon he has on each use, and recovers 10 AP 
 upon each call to recoverAP() , up to a maximum of 40. 
 No AP, no attack.

 Displays "NAME attacks ENEMY_TYPE with a WEAPON_NAME" 
 upon a call to attack() , followd by a call to the current 
 weapon’s attack() method. If there’s no equipped weapon, 
 attack() doesn’t do a thing. You’ll then substract to the 
 enemy’s HP the damage value of the weapon. 
 After that, if the target has 0 HP or less, you must delete it.

 equip() will just store a pointer to the weapon, 
 there’s no copy involved.
*/

class Character
{
	public:
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string  getName() const;
	private:
};

std::ostream &operator<<(std::ostream &os, const Character &ref);

#endif