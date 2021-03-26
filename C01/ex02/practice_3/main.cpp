/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:55 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 18:55:13 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	Zombie queenZombie("QueenZombie", "Queen");
	std::cout << "QueenZombie was borned in main hive(in main code)\n";
	queenZombie.announce();
	
	ZombieEvent zombieEvent;
	Zombie*		zombieDrone[5];

	zombieEvent.setZombieType("Drone");
	for (int i = 0; i < 5; i++)
		zombieDrone[i] = zombieEvent.
	
	return (0);
}