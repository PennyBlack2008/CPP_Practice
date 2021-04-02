/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:48 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 15:14:01 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void		printWelcome(void)
{
	std::cout << DEFAULT << "============================================" << std::endl;
}

int			main(void)
{
	srand(clock());

	printWelcome();
	std::cout << DEFAULT << "|        Welcome to Training Center        |" << std::endl;
	printWelcome();

	std::cout << DEFAULT << "\n\n---------     Constructor Test     ---------" << std::endl;
	ScavTrap a;
	ScavTrap b(a);
	ScavTrap c("Hong Jung Mo");

	std::cout << DEFAULT << "\n\n---------      Function Test       ---------" << std::endl;
	std::cout << std::endl;
	c.beRepaired(200);
	std::cout << std::endl;
	a.rangedAttack("c");
	c.takeDamage(20); //85
	std::cout << std::endl;
	b.meleeAttack("c");
	c.takeDamage(30); // 60
	std::cout << std::endl;
	c.beRepaired(10); // 70
	std::cout << std::endl;
	a.meleeAttack("c");
	c.takeDamage(30); // 45
	std::cout << std::endl;
	b.rangedAttack("c");
	c.takeDamage(20); // 30
	std::cout << std::endl;
	
	std::cout << DEFAULT << "Pope Kim is struck by lightning\n";
	std::cout << "!! WARNING!! Electric shock !! WARNING !!\n" << std::endl;
	c.takeDamage(999);
	std::cout << std::endl;
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	a.challengeNewcomer();
	c.challengeNewcomer(); // 이미 죽어서 메시지 안 나와야함.
	
	std::cout << DEFAULT << "\n\n---------      Destructor Test     ---------" << std::endl;
	return (0);
}