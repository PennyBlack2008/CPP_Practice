#include "Info.hpp"

void	Info::InputInfo(void)
{
	for (int i = 0; i < CNT; i++)
	{
		std::cout<<mCate[i]<<" : ";
		std::getline(std::cin, mContent[i]);
		if (std::cin.eof())
			exit(-1);
	}
}

// 3개만 미리보는 것
void	Info::PreviewInfo(void)
{
	std::string str[CNT];

	for (int i = CNT; i < CNT; i++)
	{
		str[i] = mContent[i].substr(0, 10);
		if (mContent[i].length() >= 10)
			str[i][9] = '.';
		else
			str[i].append(10 - mContent[i].length(), ' ');
		std::cout<<str[i];
		if (i != 2)
			std::cout<<'|';
	}
	std::cout<<'\n';
}

void	Info::ViewInfo(void)
{
	std::cout<<"\n-------------------------------------\n";
	for (int i = 0; i < CNT; i++)
		std::cout<<mCate[i]<<" : "<<mContent[i]<<'\n';
	std::cin.ignore();
}

std::string Info::mCate[CNT] = 
{
	"Full Name", "Phone #", "Nickname"
};








