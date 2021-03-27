/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:56:43 by jikang            #+#    #+#             */
/*   Updated: 2021/03/27 12:54:10 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
	: mName("default")
	, mType("default")
{
}

Zombie::Zombie(const std::string& name, const std::string& type)
	: mName(name)
	, mType(type)
{
}

Zombie::~Zombie(void)
{
	std::cout << mName << " is died\n";
}

void		Zombie::SetZombieName(const std::string& name)
{
	this->mName = name;
}

void		Zombie::SetZombieType(const std::string& type)
{
	this->mType = type;
}

void		Zombie::announce(void) const
{
	std::cout << "<" << mName << " (" << mType << ")> " << "Braiiiiiiinnnssss...\n";
}