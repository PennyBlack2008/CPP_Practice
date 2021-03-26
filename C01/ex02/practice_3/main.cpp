/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:55 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 19:59:34 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	Zombie queenZombie("QueenZombie", "Queen");
	std::cout << "QueenZombie was borned in main hive(in main code)\n";
	queenZombie.announce();
	
	ZombieEvent zombieEventA;
	Zombie*		zombieManager;

	std::cout << "QueenZombie made Scary boss\n";
	zombieEventA.setZombieType("Manager");
	zombieManager = newZombie("Scary boss");
	zombieManager->announce();
	std::cout << "Work hard Drones! Work! Work!\n";

	ZombieEvent zombieEventB;
	Zombie*		zombieDrone[5];

	zombieEventB.setZombieType("Drone");
	for (int i = 0; i < 5; i++)
		zombieDrone[i] = zombieEventB.randomChump();
	std::cout << "\n\n5 Drones was borned in egg(heap), they are borned to working hard\n";
	std::cout << "Drone is working hard.. I mean... they are working too hard\n";
	for (int i = 0; i < 5; i++)
		delete (zombieDrone[i]);
	std::cout << "\n------------- All drones are dead -------------\n";
	std::cout << "QueenZombie punishing Scary boss";
	delete (zombieManager);
	std::cout << "QueenZombie will be alive until program turn off\n";
	return (0);
}