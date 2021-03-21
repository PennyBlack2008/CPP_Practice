/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 17:55:38 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 19:10:45 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string cmd;
	while (1)
	{
		std::cout<<"Use the ADD command, the SEARCH command or the EXIT command. Any other input is discarded.\n";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			std::cout<<"Thre program quits and the contacts are lost forever\n";
			return (0);
		}
		else if (cmd == "ADD")
		{
			std::cout<<"Input a new contact’s information, one field at a time, until every field is accounted for.\n";
			phoneBook.AddPerson();
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.ShowChoice();
		}
		if (std::cin.eof() || std::cin.fail())
			break ;
	}
	return (-1);
}