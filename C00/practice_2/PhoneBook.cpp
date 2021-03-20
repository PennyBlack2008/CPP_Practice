/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 20:17:57 by jikang            #+#    #+#             */
/*   Updated: 2021/03/20 20:40:43 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: mAmount(0)
{
}

PhoneBook::~PhoneBook()
{
}

void		PhoneBook::ShowStartup(void)
{
	std::cout<<"Phone Book"<<std::endl;
	std::cout<<"Enter your commnad [ADD, SEARCH, EXIT]";
}

void		PhoneBook::AddContact(void)
{
	if (mAmount == 8)
		std::cout<<"The directory is full!\n";
	else if (mContacts[mAmount].SetInfo(mAmount + 1))
		mAmount++;
}

void		PhoneBook::ShowSearchHeader(void)
{
	std::cout<<"|-------------------------------------------|\n";
	std::cout<<"| Index | First Name | Last Name | Nickname |\n";
	std::cout<<"|-------------------------------------------|\n";
	for (int i = 0; i < mAmount; i++)
		mContacts[i].DisplayHeader();
	std::cout<<"|-------------------------------------------|\n";
}