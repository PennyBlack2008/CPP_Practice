/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:56 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 15:35:06 by jikang           ###   ########.fr       */
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
	: ClapTrap()
{
	mName = "undefined FragTrap";
	mMP = 100;
	mMP_Max = 100;
	std::cout << CYAN << "<" << mName << ">: FragTrap system booted! Ready to roll!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	mMP = 100;
	mMP_Max = 100;
	std::cout << CYAN << "<" << mName << ">: FragTrap system booted! Ready to roll!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other)
{
	*this = other;
	std::cout << CYAN << "<" << this->mName << ">: FragTrap system booted! Ready to roll!" << std::endl;
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
	std::cout << RED << "<" << mName <<">: FragTrap System shutdowns...(Dead)" << std::endl;
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

std::string			FragTrap::mFunnyAttackList[5] =
{
	"Big gasoline fart",
	"Awkward dance",
	"Thai massage",
	"Throwing Dirty socks",
	"Singing terribly"
};