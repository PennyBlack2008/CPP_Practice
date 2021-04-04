/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 09:14:46 by jikang            #+#    #+#             */
/*   Updated: 2021/04/04 11:45:37 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Poro.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::string(50, '-') << std::endl;
	Poro poroEx("poro");
	std::cout << poroEx;
	robert.polymorph(poroEx);
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}