/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:56:31 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 20:19:08 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type = "default";
	srand(clock());
}

ZombieEvent::~ZombieEvent(void)
{
}

Zombie*		ZombieEvent::newZombie(const std::string& str)
{
	Zombie*	zombie;

	zombie = new Zombie(str, this->type);
	zombie->announce();
	return (zombie);
}

Zombie*		ZombieEvent::randomChump(void)
{
	std::string name;
	
	for (int i = 0; i < rand() % 10 + 4; i++)
	{
		name.append(1u, rand() % 26 + 'a');
	}
	Zombie* zombie = new Zombie(name, this->type);
	zombie->announce();
	return (zombie);
}

void		ZombieEvent::setZombieType(const std::string& type)
{
	this->type = type;
}