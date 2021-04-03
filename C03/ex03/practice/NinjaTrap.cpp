/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:35:24 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:58:44 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
	: ClapTrap()
{
	mHP = 60;
	mHP_Max = 60;
	mMP = 120;
	mMP_Max = 120;
	mName = "unknowned Ninja";
	mMeleeAttackDamage = 60;
	mRangedAttackDamage = 5;
	mArmorDamageReduction = 0;
	std::cout << CYAN << "<" << mName << ">: We Are Ninja! let's do it!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name)
	: ClapTrap(name)
{
	mHP = 60;
	mHP_Max = 60;
	mMP = 120;
	mMP_Max = 120;
	mMeleeAttackDamage = 60;
	mRangedAttackDamage = 5;
	mArmorDamageReduction = 0;
	std::cout << CYAN << "<" << mName << ">: We Are Ninja! let's do it!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
	: ClapTrap(other)
{
	*this = other;
	std::cout << CYAN << "<" << mName << ">: We Are Ninja! let's do it!" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& other)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << RED << "<" << mName <<">: Never say die...(Dead)" << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (mHP > 0)
	{
		std::cout << GREY << "N2NJ4-TP "
					<< "<" << mName << ">"
					<< " attacks "
					<< "<" << trap.getName() << ">"
					<< " with knuckle buster, causing "
					<< "<" << mMeleeAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (mHP > 0)
	{
		std::cout << GREY << "N2NJ4-TP "
					<< "<" << mName << ">"
					<< " attacks "
					<< "<" << trap.getName() << ">"
					<< " with Bomb, causing "
					<< "<" << mMeleeAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (mHP > 0)
	{
		std::cout << GREY << "N2NJ4-TP "
					<< "<" << mName << ">"
					<< " attacks "
					<< "<" << trap.getName() << ">"
					<< " with his teeth, causing "
					<< "<" << mMeleeAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (mHP > 0)
	{
		std::cout << GREY << "N2NJ4-TP "
					<< "<" << mName << ">"
					<< " attacks "
					<< "<" << trap.getName() << ">"
					<< " with shuriken, causing "
					<< "<" << mRangedAttackDamage << ">"
					<< " points of damage!" << std::endl;
	}
}