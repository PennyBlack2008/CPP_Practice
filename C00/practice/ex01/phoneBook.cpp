#include "phoneBook.hpp"

// 생성자, 근데 이런식으로 변수 초기화를 하네
// num 은 전역변수 같은 역할을 하나보네
phoneBook::phoneBook(void) : num(0)
{

}

void	phoneBook::addContact(void)
{
	if (num == SIZE)
		std::cout<<"!!!Phone Book is full!!!";
	else
		contact[num++].inputInfo();
}

void	phoneBook::searchContact(void)
{
	int idx;

	std::cout<<" index | first name | last name | nick name \n";
	std::cout<<"--------------------------------------------\n";
	for (int i = 0; i < num; i++)
	{
		std::cout<<std::setw(10);
		std::cout<<i<<'|';
		contact[i].previewInfo();
	}
	std::cout<<"\nselect index : ";
	std::cin>>idx;
	if (std::cin.eof())
		exit(-1);
	if (idx < 0 || num <= idx || std::cin.fail())
	{
		print("wrong index!");
		std::cin.clear();
		std::cin.ignore();
	}
	else
		contact[idx].viewInfo();
}
