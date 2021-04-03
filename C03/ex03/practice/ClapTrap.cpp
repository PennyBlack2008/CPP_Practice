/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:54:26 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:49:14 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: mHP(100)
	, mHP_Max(100)
	, mMP(50)
	, mMP_Max(50)
	, mLv(1)
	, mName("undefined ClapTrap")
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << CYAN << "<" << mName << ">: ClapTrap is ready!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: mHP(100)
	, mHP_Max(100)
	, mMP(50)
	, mMP_Max(50)
	, mLv(1)
	, mName(name)
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << CYAN << "<" << mName << ">: ClapTrap is ready!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << CYAN << "<" << mName << ">: ClapTrap is ready!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap(void)
{
	std::cout << CYAN << "<" << mName << ">: ClapTrap system down" << std::endl;
}

void		ClapTrap::rangedAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "<" << mName << "> attacks <" << target \
	<< "> at range, causing <" << mRangedAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "<" << mName << "> attacks <" << target \
	<< "> at melee, causing <" << mMeleeAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << YELLOW << "<" << mName << "> is under attack! " \
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

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (mHP <= 0)
		return ;
	std::cout << DEFAULT << "<" << mName << "> used healing portion" << std::endl;
	std::cout << mName << "'s HP : " << mHP << " -> ";
	/* 힐량이 최대 체력을 넘기지 않도록 */
	mHP += amount;
	if (mHP > mHP_Max)
		mHP = mHP_Max;
	std::cout << mHP << std::endl;
}

const std::string&  ClapTrap::getName(void) const
{
	return (mName);
}