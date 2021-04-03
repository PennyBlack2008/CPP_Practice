/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:20:08 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:03:30 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap()
{
	mName = "Scav_unknown";
	mMeleeAttackDamage = 20;
	mRangedAttackDamage = 15;
	mArmorDamageReduction = 3;
	std::cout << CYAN << "<" << mName << ">: We Are Scav! go go go!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	mMeleeAttackDamage = 20;
	mRangedAttackDamage = 15;
	mArmorDamageReduction = 3;
	std::cout << CYAN << "<" << mName << ">: We Are Scav! go go go!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	*this = other;
	std::cout << CYAN << "<" << mName << ">: We Are Scav! go go go!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
	std::cout << RED << "<" << mName <<">: Never say die...(Dead)" << std::endl;
}

void		ScavTrap::challengeNewcomer(void)
{
	if (mHP <= 0)
		return ;
	if (mMP >= 25)
	{	
		std::cout << PURPLE << "SC4V-TP <" << mName << "> " << mFunnyAttackList[rand() % 5]
		<< std::endl;
		std::cout << "MP : " << mMP << " -> " << mMP - 25 << std::endl;
		mMP -= 25;
	}
	else
		std::cout << "Not enough energy(MP) :" << mMP << std::endl;
}

std::string			ScavTrap::mFunnyAttackList[5] =
{
	"Push up 100 times",
	"Run treadmill 20 mins with 12km/h",
	"Deadlift 3 rounds with 10 RM and 100kg",
	"Squat 3 rounds with 10 RM and 100kg",
	"Bench press 3 rounds with 10 RM and 100kg"
};