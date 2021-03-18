#include "PhoneBook.hpp"

// 생성자, 근데 이런식으로 변수 초기화를 하네
// num 은 전역변수 같은 역할을 하나보네
PhoneBook::PhoneBook(void)
	: mNum(0)
{
}

void	PhoneBook::AddContact(void)
{
	if (mNum == SIZE)
		std::cout<<"!!!Phone Book is full!!!";
	else
		mContact[mNum++].InputInfo();
}

void	PhoneBook::SearchContact(void)
{
	int idx;

	std::cout<<" Index | Full Name | Phone #\n";
	std::cout<<"--------------------------------------------\n";
	for (int i = 0; i < mNum; i++)
	{
		std::cout<<std::setw(10);
		std::cout<<i<<'|';
		mContact[i].PreviewInfo();
	}
	std::cout<<"\nselect index : ";
	std::cin>>idx;
	if (std::cin.eof())
		exit(-1);
	if (idx < 0 || mNum <= idx || std::cin.fail())
	{
		print("wrong index!");
		std::cin.clear();
		std::cin.ignore();
	}
	else
		mContact[idx].ViewInfo();
}
