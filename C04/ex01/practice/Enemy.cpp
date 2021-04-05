/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:23:41 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:23:42 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
An enemy has a number of hit points and a type.
An enemy can take damage (which reduces his HP). 
If the damage is <0, don’t do anything.
*/

Enemy::Enemy(void)
	: mHP(0)
{
}

Enemy::Enemy(int hp, const std::string& type)
	: mHP(hp)
	, mType(type)
{
}

Enemy::Enemy(const Enemy& other)
{
	*this = other;
}

Enemy::~Enemy(void)
{
	// std::cout << "Enemy destructor called." << std::endl;
}

Enemy&				Enemy::operator=(const Enemy& other)
{
	mHP = other.mHP;
	mType = other.mType;
	return (*this);
}

const std::string&	Enemy::getType(void) const
{
	return (mType);
}

int					Enemy::getHP(void) const
{
	return (mHP);
}

void				Enemy::setType(const std::string& type)
{
	mType = type;
}

void				Enemy::setHP(const int hp)
{
	mHP = hp;
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
	{
		return ;
	}
	else
	{
		mHP -= damage;
		if (mHP < 0)
		{
			mHP = 0;
		}
	}
}