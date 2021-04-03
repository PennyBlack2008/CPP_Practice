/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:09:13 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 15:32:07 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
	: ClapTrap()
	, FragTrap()
	, NinjaTrap()
{
	mName = "Super unknown";
	mHP = 100;
	mMP_Max = 100;
	mMP = 120;
	mMP_Max = 120;
	mMeleeAttackDamage = 60;
	mRangedAttackDamage = 20;
	mArmorDamageReduction = 5;
	std::cout << CYAN << mName
				<< " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name)
	: ClapTrap(name)
	, FragTrap(name)
	, NinjaTrap(name)
{
	mHP = 100;
	mMP_Max = 100;
	mMP = 120;
	mMP_Max = 120;
	mMeleeAttackDamage = 60;
	mRangedAttackDamage = 20;
	mArmorDamageReduction = 5;
	std::cout << CYAN << mName
				<< " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other)
	: ClapTrap(other)
	, FragTrap(other)
	, NinjaTrap(other)
{
	*this = other;
	std::cout << CYAN << mName
			<< " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap&   SuperTrap::operator=(const SuperTrap& other)
{
	mName = other.mName;
	mHP = other.mHP;
	mHP_Max = other.mHP_Max;
	mMP = other.mMP;
	mMP_Max = other.mMP_Max;
	mLv = other.mLv;
	mMeleeAttackDamage = other.mMeleeAttackDamage;
	mRangedAttackDamage = other.mRangedAttackDamage;
	mArmorDamageReduction = other.mArmorDamageReduction;
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << RED << "SUPERMAN destroyed!!" << std::endl;
}
