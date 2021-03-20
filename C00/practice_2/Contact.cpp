/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 20:41:43 by jikang            #+#    #+#             */
/*   Updated: 2021/03/20 21:46:57 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	for (int i = FirstName; i <= Phone; i++)
		mInfo[i] = std::string();
}

Contact::~Contact()
{
}

std::string		Contact::mFieldsName[DETAIL_NUM]
{
	"First Name",
	"Last Name",
	"Nick Name",
	"Email",
	"Phone #"
};

bool	Contact::SetInfo(int index)
{
	mIndex = index;
	for (int i = FirstName; i <= Phone; i++)
	{
		std::cout<<"# "<<Contact::mFieldsName[i]<<":\n+";
		std::getline(std::cin, mInfo[i]);
	}
	size_t len = 0;
	for (int i = FirstName; i <= Phone; i++)
		len += mInfo[i].length();
	if (len == 0)
	{
		std::cout<<"$ Empty contact not added !\n";
		return (false);
	}
	std::cout<<"# Contact added !\n";
	return (true);
}

void	Contact::DisplayHeader()
{
	
}