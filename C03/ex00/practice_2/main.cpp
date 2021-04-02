/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:48 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 13:06:16 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	FragTrap a;
	FragTrap b(a);
	FragTrap c("Pope Kim");

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
	a.vaulthunter_dot_exe("b");
	a.vaulthunter_dot_exe("b");
	a.vaulthunter_dot_exe("b");
	a.vaulthunter_dot_exe("b");
	a.vaulthunter_dot_exe("b");
	a.vaulthunter_dot_exe("b");
	c.vaulthunter_dot_exe("robot is dead! ignore this code");
	
	std::cout << DEFAULT << "\n\n---------      Destructor Test     ---------" << std::endl;
	return (0);
}