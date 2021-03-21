/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 17:55:38 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 20:37:27 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string cmd;
	while (1)
	{
		std::cout<<"Select (ADD command, the SEARCH command or the EXIT command)\n";
		std::cout<<">> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "EXIT")
		{
			std::cout<<"Thre program quits and the contacts are lost forever\n";
			return (0);
		}
		else if (cmd == "ADD")
		{
			std::cout<<"\n------------------You Are in ADD command------------------\n";
			std::cout<<"Input a new contact’s information, one field at a time, until every field is accounted for.\n";
			phoneBook.AddPerson();
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.ShowChoice();
			phoneBook.MakeChoice();
		}
		else
			std::cout<<"You got that wrong input!"<<std::endl;
	}
	return (-1);
}