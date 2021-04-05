/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:28:54 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:12:23 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	*this = other;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& other)
{
	(void)other;
	return (*this);
}

/* 깊은 복사를 위한 함수 */
ISpaceMarine*		AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;

}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}
