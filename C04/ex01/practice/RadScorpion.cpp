/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:27:49 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:27:49 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
• Characteristics:
	◦ HP: 80
	◦ Type: "RadScorpion"
	◦ On birth, displays: "* click click click *" 
	◦ Upon death, displays: "* SPROTCH *"
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
	: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other)
	: Enemy(other)
{
	*this = other;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& other)
{
	setHP(other.getHP());
	setType(other.getType());
	return (*this);
}

void			RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
