/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:29:12 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 21:44:11 by jikang           ###   ########.fr       */
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
	std::cout<<"-------------------------------------------\n";
	std::cout<<"     index|first name| last name|  nickname\n";
	std::cout<<"-------------------------------------------\n";
	for (int i = 0; i < mNum; i++)
	{
		std::cout<<std::setw(10);
		//std::cout<<"         "<<i + 1<<"|";
		mPerson[i].ShowChoice();
	}
}

void	PhoneBook::MakeChoice()
{
	int idx;
	
	std::cout<<"Input the index of the desired entry\n";
	std::cout<<">> ";
	std::cin>>idx;
	if (std::cin.eof())
		exit(-1);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout<<"You got that wrong #\n";
	}
	else if (idx <= 0 || idx > mNum)
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout<<"You got that wrong #\n";
		std::cout<<"mNum is "<<mNum<<std::endl;
	}
	else
	{
		mPerson[idx - 1].ShowContact();
		std::cin.ignore();
	}
}
