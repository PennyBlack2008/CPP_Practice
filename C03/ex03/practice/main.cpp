/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:07:48 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:59:21 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

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
	std::cout << DEFAULT << "------------function test-----------" << std::endl;
	d.ninjaShoebox(a);
	d.ninjaShoebox(b);
	d.ninjaShoebox(c);
	d.ninjaShoebox(d);
	std::cout << DEFAULT << "------------------------------------" << std::endl;
	std::cout << DEFAULT << "----------destructor test-----------" << std::endl;
	return (0);
}