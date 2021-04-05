/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:24:39 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:24:39 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
	: AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& other)
	: AWeapon(other)
{
	*this = other;
}

PowerFist::~PowerFist(void)
{
}

PowerFist&		PowerFist::operator=(const PowerFist& other)
{
	setName(other.getName());
	setAPCost(other.getAPCost());
	setDamage(other.getDamage());
	return (*this);
}

void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}