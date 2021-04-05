/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:13:40 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:14:26 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* private 을 사용해 디폴트 생성자가 생성되는 것을 막았습니다. */
Character::Character()
	: mAP(40)
	, mWeapon(NULL)
{
}

Character::Character(const std::string& name)
	: mName(name)
	, mAP(40)
	, mWeapon(NULL)
{
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
}

Character&				Character::operator=(const Character& other)
{
	mName = other.mName;
	mAP = other.mAP;
	mWeapon = other.mWeapon;
	return (*this);
}

const std::string&		Character::getName(void) const
{
	return (mName);
}

int						Character::getAP(void) const
{
	return (mAP);
}

AWeapon*				Character::getWeapon(void) const
{
	return (mWeapon);
}

void					Character::recoverAP(void)
{
	mAP += 10;
	if (mAP > 40)
	{
		mAP = 40;
	}
}

void					Character::attack(Enemy* enemy)
{
	if (mWeapon && mAP >= mWeapon->getAPCost() && enemy)
	{
		mAP -= mWeapon->getAPCost();
		std::cout << mName << " attacks " << enemy->getType() << " with a " << mWeapon->getName() << std::endl;
		mWeapon->attack();
		enemy->takeDamage(mWeapon->getDamage());
		if (enemy->getHP() == 0)
		{
			delete enemy;
		}
	}
}

/* 무기는 이미 main 문에서 동적할당 된 채로 들어온다. */
void					Character::equip(AWeapon* weapon)
{
	mWeapon = weapon;
}

// Character 객체도 cout에 출력이 되도록 <<연산자 오버로딩
std::ostream&			operator<<(std::ostream &os, const Character &ref)
{
	if (ref.getWeapon())
		os<< ref.getName()<<" has "<<ref.getAP()<<" AP and wields a "
			<< ref.getWeapon()->getName() <<'\n';
	else
		os << ref.getName() << " has " << ref.getAP() << " and is unarmed.\n";
	return (os);
}