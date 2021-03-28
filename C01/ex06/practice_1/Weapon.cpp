/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:48:41 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 14:23:28 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
	: mType(type)
{
}
/* 레퍼런스로 받은 스트링 클래스를 그냥 스트링 클래스로 받으면 조금 비효율적?
내 생각에는 멤버변수도 레퍼런스이면 좋을 수도 있을 것 같은 데, -> 그렇다. */
void	Weapon::setType(const std::string& type)
{
	this->mType = type;
}
/* 만약에 레퍼런스 타입으로 반환하면 이 return 안에 있는 괄호에
레퍼런스로 타입을 변경해줘야할까? -> 그렇다. */
const std::string&	Weapon::getType(void) const
{
	return (this->mType);
}