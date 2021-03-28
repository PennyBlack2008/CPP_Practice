/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:39:57 by jikang            #+#    #+#             */
/*   Updated: 2021/03/27 20:39:58 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const std::Weapon& weapon)
{
	this->mName = name;
	this->mWeapon = weapon;
}

void			HumanA::attack(void) const
{
	std::cout << this->mName << " attacks with his " << this->mWeapon << std::endl;
}
