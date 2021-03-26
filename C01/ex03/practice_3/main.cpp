/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:55 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 22:11:01 by jikang           ###   ########.fr       */
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
	std::cout << "Made new zombie A\n\n";
	Zombie zombieA("Zombie A", "Main Stack");
	zombieA.announce();
	
	std::cout << "Made new zombie hordes\n\n";
	ZombieHorde	zombiehorde(3);
	zombiehorde.announce();
	std::cout <<

	return (0);
}