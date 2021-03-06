/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:56 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 13:11:02 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Canonical form
 - 디폴트 생성자
 - 소멸자
 - 복사 생성자
 - 할당 연산자(연산자 오버로등)
*/

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: mHP(100)
	, mHP_Max(100)
	, mMP(100)
	, mMP_Max(100)
	, mLv(1)
	, mName("undefined")
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << CYAN << "<" << mName << ">: system booted! Ready to roll!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: mHP(100)
	, mHP_Max(100)
	, mMP(100)
	, mMP_Max(100)
	, mLv(1)
	, mName(name)
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << CYAN << "<" << mName << ">: system booted! Ready to roll!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
	std::cout << CYAN << "<" << mName << ">: system booted! Ready to roll!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
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

FragTrap::~FragTrap()
{
	std::cout << RED << "<" << mName <<">: System shutdowns...(Dead)" << std::endl;
}

void		FragTrap::rangedAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "FR4G-TP <" << mName << "> attacks <" << target \
	<< "> at range, causing <" << mRangedAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(const std::string& target)
{
	if (mHP <= 0)
		return ;
	std::cout << GREEN << "FR4G-TP <" << mName << "> attacks <" << target \
	<< "> at melee, causing <" << mMeleeAttackDamage \
	<< "> points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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
	std::cout << YELLOW << "FR4G-TP <" << mName << "> is under attack! " \
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

void		FragTrap::beRepaired(unsigned int amount)
{
	if (mHP <= 0)
		return ;
	std::cout << "FR4G-TP <" << mName << "> used healing portion" << std::endl;
	std::cout << mName << "'s HP : " << mHP << " -> ";
	/* 힐량이 최대 체력을 넘기지 않도록 */
	mHP += amount;
	if (mHP > mHP_Max)
		mHP = mHP_Max;
	std::cout << mHP << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	if (mHP <= 0)
		return ;
	if (mMP >= 25)
	{	
		std::cout << PURPLE << "FR4G-TP <" << mName << "> " << mFunnyAttackList[rand() % 5]
		<< " <" << target << ">" << std::endl;
		std::cout << "MP : " << mMP << " -> " << mMP - 25 << std::endl;
		mMP -= 25;
	}
	else
		std::cout << "Not enough energy(MP) :" << mMP << std::endl;
}

const unsigned int&	FragTrap::getHitPoints(void) const
{
	return (this->mHP);
}

std::string			FragTrap::mFunnyAttackList[5] =
{
	"Big gasoline fart",
	"Awkward dance",
	"Thai massage",
	"Throwing Dirty socks",
	"Singing terribly"
};