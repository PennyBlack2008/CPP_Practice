/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:56:43 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 18:04:18 by jikang           ###   ########.fr       */
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
}

