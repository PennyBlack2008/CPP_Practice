/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:55 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 20:36:04 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void program_print(void)
{
	std::cout << "=================================================\n";
	std::cout << "               Program Starts...\n";
	std::cout << "=================================================\n";
}

int main(void)
{
	program_print();
	/* 스택 영역에 Queen 생성. Main 문이 끝날 때, 사라진다 */
	Zombie queenZombie("QueenZombie", "Queen");
	std::cout << "QueenZombie was borned in main hive(in main code) as stack\n";
	queenZombie.announce();
	
	/* 힙 영역에 Manager 생성. Delete 시 사라진다. */
	ZombieEvent zombieEventA;
	Zombie*		zombieManager;

	std::cout << "QueenZombie made Scary boss\n\n\n";
	zombieEventA.setZombieType("Manager");
	zombieManager = zombieEventA.newZombie("Scary boss");
	std::cout << "Work hard Drones! Work! Work!\n\n";

	/* 힙 영역에 Drone 생성. Delete 시 사라진다. */
	ZombieEvent zombieEventB;
	Zombie*		zombieDrone[5];

	zombieEventB.setZombieType("Drone");
	std::cout << "\n\n5 Drones was borned in egg(heap), they are borned to working hard\n";
	for (int i = 0; i < 5; i++)
		zombieDrone[i] = zombieEventB.randomChump();
	std::cout << "Drone is working hard.. I mean... they are working too hard\n";
	for (int i = 0; i < 5; i++)
		delete (zombieDrone[i]); // Delete Drones
	std::cout << "\n------------- All drones are dead from heap -------------\n";
	std::cout << "QueenZombie punishing Scary boss\n";
	delete (zombieManager); // Delete Manager
	std::cout << "Scary boss is dead from heap\n\n\n";
	std::cout << "QueenZombie will be alive until program turn off\n";

	return (0);
}