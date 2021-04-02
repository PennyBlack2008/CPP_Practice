/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:56 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 10:03:33 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: mName("undefined")
	, mHP(100)
	, mHP_Max(100)
	, mMP(100)
	, mMP_Max(100)
	, mLv(1)
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << mName << " is booted! Ready to roll!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: mName(name)
	, mHP(100)
	, mHP_Max(100)
	, mMP(100)
	, mMP_Max(100)
	, mLv(1)
	, mMeleeAttackDamage(30)
	, mRangedAttackDamage(20)
	, mArmorDamageReduction(5)
{
	std::cout << mName << " is booted! Ready to roll!" << std::endl;
}
/*
복사 생성자로 복사해도 정적할당한 거는 
따로 주소를 가지고 있다.
*/
FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
	std::cout << mName << " is booted! Ready to roll!" << std::endl;
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
	std::cout << "System shutdowns...(Dead)" << std::endl;
}

void		FragTrap::rangedAttack(const std::string& target)
{
	this->mHP = 50;
}

void		FragTrap::meleeAttack(const std::string& target)
{
	std::cout << this->mHP << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	(void)this;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	(void)this;
}

void		FragTrap::vaulthunter_dot_exe(const std::string& target)
{
	(void)this;
}

// const int	FragTrap::getHitPoints(void) const
// {
// 	return (this->mHP);
// }