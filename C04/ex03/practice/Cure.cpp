/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:33:16 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:36:21 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// AMateria의 생성자가 호출됨
Cure::Cure(void)
	: AMateria("cure")
{
}

// AMateria의 복사 생성자가 먼저 호출됨
Cure::Cure(const Cure& other)
	: AMateria(other)
{
	*this = other;
}

Cure::~Cure(void)
{
}

Cure&		Cure::operator=(const Cure& other)
{
	setXP(other.getXP());
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}