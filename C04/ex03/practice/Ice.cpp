/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:31:33 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:39:01 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// AMateria의 생성자가 호출됨
// 이런 식으로 상속을 주는 AMateria 생성자를 초기화할 수 있다.
Ice::Ice(void)
	: AMateria("ice")
{
}

// AMateria의 복사생성자가 먼저 호출됨
Ice::Ice(const Ice& other) : AMateria("ice")
	: AMateria(other)
{
	*this = other;
}

Ice::~Ice(void)
{
}

Ice&		Ice::operator=(const Ice& other)
{
	setXP(other.getXP());
	return (*this);
}

/* 깊은 복사를 위한 함수 */
AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
