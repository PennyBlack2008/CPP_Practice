/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:56:31 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 18:58:02 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

ZombieEvent::newZombie(const std::string& str)
{
	this->name = str;
}

ZombieEvent::randomChump(void)
{
	
}