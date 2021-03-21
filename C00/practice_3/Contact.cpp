#include "Contact.hpp"

Contact::Contact()
{
}

void	Contact::ShowField(int i)
{
	std::cout<<Contact::mField[i];
}

void	Contact::AddField(int i)
{
	std::getline(std::cin, mPrivateInfo[i]);
}

void	Contact::ShowChoice(void)
{
	std::string str[3];
	for (int i = 0; i < 3; i++)
	{
		/* 문자열 미리 자른 후 */
		str[i] = mPrivateInfo[i].substr(0, 10);
		if (mPrivateInfo[i].length() >= 10)
		{
			str[i][9] = '.';
			std::cout<<str[i];
		}
		else
		{
			for (int j = 0; j < 10 - (int)mPrivateInfo[i].length(); j++)
				std::cout<<" ";
			std::cout<<str[i];
		}
		if (i != 2)
			std::cout<<"|";
	}
	std::cout<<std::endl;
}

std::string		Contact::mField[11] =
{
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

