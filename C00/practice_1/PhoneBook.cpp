#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	: mNum(0)
{
}

void		PhoneBook::AddContact(void)
{
	if (mNum == SIZE)
		std::cout<<"!!! Phone Book is full !!!";
	else
		mContact[mNum++].InputInfo();
}
