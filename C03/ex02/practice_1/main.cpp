/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:48 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:12:58 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	FragTrap a("Pope Kim");
	ScavTrap b("Hong Jung Mo");

	std::cout << DEFAULT << "\n\n---------      Function Test       ---------" << std::endl;
	std::cout << std::endl;
	a.beRepaired(200);
	std::cout << std::endl;
	a.rangedAttack("Hong Jung Mo");
	b.takeDamage(20);
	std::cout << std::endl;
	b.meleeAttack("Pope Kim");
	a.takeDamage(30);
	std::cout << std::endl;
	a.beRepaired(10);
	std::cout << std::endl;
	
	a.vaulthunter_dot_exe("Hong Jung Mo");
	a.vaulthunter_dot_exe("Hong Jung Mo");
	a.vaulthunter_dot_exe("Hong Jung Mo");

	b.challengeNewcomer();
	b.challengeNewcomer();
	b.challengeNewcomer();
	
	std::cout << DEFAULT << "\n\n---------      Destructor Test     ---------" << std::endl;
	return (0);
}