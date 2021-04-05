/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:26:33 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:35:54 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Enemy.hpp"
# include "AWeapon.hpp"
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
	Character(const std::string& name);
	Character(const Character& other);
	~Character(void);
	
	Character	&operator=(const Character& other);

	const std::string&	getName(void) const;
	int					getAP(void) const;
	AWeapon*			getWeapon(void) const;
	
	void				recoverAP(void);
	void				equip(AWeapon* weapon);
	void				attack(Enemy* enemy);
private:
	Character(void);	// Charactor abc 로 선언되는 것을 막았음.
	std::string			mName;
	int					mAP;
	AWeapon*			mWeapon;
};

std::ostream&			operator<<(std::ostream &os, const Character &ref);

#endif