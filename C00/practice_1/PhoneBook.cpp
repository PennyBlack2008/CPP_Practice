#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	: mNum(0)
{
}

void		PhoneBook::AddContact(void)
{
	if (mNum == SIZE)
		std::cout<<"!!! Phone Book is full !!!\n";
	else
		mContact[mNum++].InputContact();
}

void		PhoneBook::SearchContact(void)
{
	int idx;
	std::cout<<"search start"<<std::endl;
	std::cout<<" Index | Full Name | Phone #"<<std::endl;
	for (int i = 0; i < mNum; i++)
	{
		std::cout<<" "<<i;
		std::cout<<std::setw(6);
		std::cout<<'|';
		mContact[i].PreviewContact();
	}
	std::cout<<"\nSelect Index : ";
	std::cin>>idx;
	if (std::cin.eof())
		exit(-1);
	/* idx 에 말도안되는 게 들어가면 세그폴트날까? NULL 문자 혹은 세그폴트 */
	if (idx < mNum && idx >= 0)
		mContact[idx].ViewContact();
	else
	{
		std::cout<<"wrong index\n";
		std::cin.clear();
		std::cin.ignore();
	}
}