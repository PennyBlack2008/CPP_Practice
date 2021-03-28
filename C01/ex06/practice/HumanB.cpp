/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:40:01 by jikang            #+#    #+#             */
/*   Updated: 2021/03/27 20:56:19 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->mName = name;
	this->mWeapon = NULL;
}

HumanB::~HumanB()
{
}

void			HumanB::attack(void) const
{
	if (weapon)
		std::cout << mName << " attacks with his " << mWeapon->getType() << std::endl;
	else
		std::cout << mName << " has no weapon" << std::endl;
}

void			HumanB::setWeapon(const Weapon& weapon)
{
	this->mWeapon = &weapon;
}
