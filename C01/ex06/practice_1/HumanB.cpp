/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:25:11 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 15:26:25 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->mName = name;
	this->mWeapon = NULL;
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	this->mWeapon = &weapon;
}

/*
이 HumanB 에서 this->mWeapon 인 Weapon 포인터가 Weapon 의 private 변수에 접근하기 위해서는
Weapon 의 메소드가 필요하다. 이 때, Weapon 클래스 포인터가 Weapon의 클래스 매소드를 사용하려면,
-> 를 사용해야한다.
*/
void	HumanB::attack(void) const
{
	if (this->mWeapon)
		std::cout << this->mName << " attacks with his " << this->mWeapon->getType() << std::endl;
	else
		std::cerr << this->mName << " doesn't have any weapon, he ran away" << std::endl;
}