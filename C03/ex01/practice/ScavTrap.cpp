/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:20:08 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 15:15:38 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: mHP(100)
	, mHP_Max(100)
	, mMP(50)
	, mMP_Max(50)
	, mLv(1)
	, mName("unknown")
	, mMeleeAttackDamage(20)
	, mRangedAttackDamage(15)
	, mArmorDamageReduction(3)
{
	std::cout << CYAN << "<" << mName << ">: We Are Scav! go go go!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: mHP(100)
	, mHP_Max(100)
	, mMP(50)
	, mMP_Max(50)
	, mLv(1)
	, mName(name)
	, mMeleeAttackDamage(20)
	, mRangedAttackDamage(15)
	, mArmorDamageReduction(3)
{
	std::cout << CYAN << "<" << mName << ">: We Are Scav! go go go!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
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

void		ScavTrap::rangedAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "SC4V-TP <" << mName << "> attacks <" << target \
	<< "> at range, causing <" << mRangedAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "SC4V-TP <" << mName << "> attacks <" << target \
	<< "> at melee, causing <" << mMeleeAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (mHP <= 0)
		return ;
	/* 데미지 받았을 때 */
	unsigned int damage;

	/* Armor 에 따른 데미지 감소효과 계산 */
	if (amount > 5)
		damage = amount - mArmorDamageReduction;
	else
		damage = 0;
	std::cout << YELLOW << "SC4V-TP <" << mName << "> is under attack! " \
	<< "had damaged <" << amount << "> T.T" << std::endl \
	<< "Armor takes damage of <" << mArmorDamageReduction \
	<< "> " << mName << " had points of <" << damage << "> damage!" << std::endl;
	std::cout << mName << "'s HP : " << mHP;
	if (mHP < damage)
		mHP = 0;
	else
		mHP -= damage;
	std::cout << " -> " << mHP << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (mHP <= 0)
		return ;
	std::cout << "SC4V-TP <" << mName << "> used healing portion" << std::endl;
	std::cout << mName << "'s HP : " << mHP << " -> ";
	/* 힐량이 최대 체력을 넘기지 않도록 */
	mHP += amount;
	if (mHP > mHP_Max)
		mHP = mHP_Max;
	std::cout << mHP << std::endl;
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

const unsigned int&	ScavTrap::getHitPoints(void) const
{
	return (this->mHP);
}

std::string			ScavTrap::mFunnyAttackList[5] =
{
	"Push up 100 times",
	"Run treadmill 20 mins with 12km/h",
	"Deadlift 3 rounds with 10 RM and 100kg",
	"Squat 3 rounds with 10 RM and 100kg",
	"Bench press 3 rounds with 10 RM and 100kg"
};