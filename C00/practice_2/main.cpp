/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:59:55 by jikang            #+#    #+#             */
/*   Updated: 2021/03/20 20:15:26 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook pb;
	bool bRun;
	std::string cmd;

	PhoneBook.ShowStartup();
	bRun = true;
	while (bRun)
	{
		std::cout<<">";
		std::getline(std::cin, cmd);
		if (cmd == 'ADD')
			PhoneBook.AddContact();
		else if (cmd == "SEARCH")
			PhoneBook.SearchContact();
		else if (cmd == "EXIT")
		{
			std::cout<<"# Bye."<<std::endl;
			bRun = false;
		}
	}
	return (0);
}