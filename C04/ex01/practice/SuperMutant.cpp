/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:38:53 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:39:52 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
 HP: 170
• Type: "Super Mutant"
• On birth, displays: "Gaaah. Me want smash heads!"
• Upon death, displays: "Aaargh..."
• Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re kinda strong, these guys.)
*/

SuperMutant::SuperMutant(void)
	: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other)
	: Enemy(other)
{
	*this = other;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& other)
{
	setHP(other.getHP());
	setType(other.getType());
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}