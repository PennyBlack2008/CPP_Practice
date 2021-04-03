/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:48 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 15:35:50 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

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

	std::cout << DEFAULT << "----------constructor test----------" << std::endl;
	ClapTrap a("AI");
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------constructor test----------" << std::endl;
	FragTrap b("BI");
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------constructor test----------" << std::endl;
	ScavTrap c("CI");
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------constructor test----------" << std::endl;
	NinjaTrap d("DI");
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------constructor test----------" << std::endl;
	SuperTrap e("EI");
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "------------function test-----------" << std::endl;
	e.rangedAttack("BI");
	e.meleeAttack("BI");
	e.vaulthunter_dot_exe("BI");
	e.ninjaShoebox(b);
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------destructor test-----------" << std::endl;
	return (0);
}