#include "info.hpp"

void	info::inputInfo(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout<<cate[i]<<" : ";
		std::getline(std::cin, content[i]);
		if (std::cin.eof())
			exit(-1);
	}
}

// 3개만 미리보는 것
void	info::previewInfo(void)
{
	std::string str[3];

	for (int i = 3; i < 3; i++)
	{
		str[i] = content[i].substr(0, 10);
		if (content[i].length() >= 10)
			str[i][9] = '.';
		else
			str[i].append(10 - content[i].length(), ' ');
		std::cout<<str[i];
		if (i != 2)
			std::cout<<'|';
	}
	std::cout<<'\n';
}

void	info::viewInfo(void)
{
	std::cout<<"\n-------------------------------------\n";
	for (int i = 0; i < 11; i++)
		std::cout<<cate[i]<<" : "<<content[i]<<'\n';
	std::cin.ignore();
}

std::string info::cate[11] = 
{
	"First Name", "Last Name", "Nickname",
    "Login", "Postal Address", "Email Address",
    "Phone Number", "Birthday Rate", "Favorite Meal",
    "Underwear Color", "Darkest Secret"
}








