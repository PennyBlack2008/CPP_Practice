/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:29:12 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 19:40:01 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	: mNum(0)
{
}

void PhoneBook::AddPerson()
{
	if (!(mNum < SIZE))
	{
		std::cout<<"Phone Book is full\n";
		return ;
	}
	for (int i = 0; i < 11; i++)
	{
		mPerson[mNum].ShowField(i);
		std::cout<<" : ";
		mPerson[mNum].AddField(i);
	}
	mNum++;
}

void	PhoneBook::ShowChoice()
{
	std::cout<<"     index|first name| last name|  nickname\n";
	for (int i = 0; i < mNum; i++)
	{
		std::cout<<"         "<<i<<"|";
		mPerson[i].ShowChoice();
	}
}