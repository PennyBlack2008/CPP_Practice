/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:30:03 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:30:04 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
	: _type("undefined")
	, _xp(0)
{
}

AMateria::AMateria(const std::string& type)
	: _type(type)
	, _xp(0)
{
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria::~AMateria(void)
{
}

AMateria&			AMateria::operator=(const AMateria& other)
{
	_xp = other._xp;
	return (*this);
}

const std::string&	AMateria::getType() const
{
	return (_type);
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

void				AMateria::setXP(const int xp)
{
	_xp = xp;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

