/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:54:47 by jikang            #+#    #+#             */
/*   Updated: 2021/04/04 11:21:21 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
	: Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string& name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other)
	: Victim(other)
{
	*this = other;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << GetName() << " has been turned into a pink pony!" << std::endl;
}

Peon&	Peon::operator=(const Peon& other)
{
	SetName(other.GetName());
	return (*this);
}