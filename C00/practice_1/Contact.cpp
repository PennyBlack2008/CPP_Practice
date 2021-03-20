#include "Contact.hpp"

void		Contact::InputContact(void)
{
	std::string str[DATA_NUM];
	
	for (int i = 0; i < DATA_NUM; i++)
	{
		std::cout<<mCate[i]<<" : ";
		std::getline(std::cin, mContent[i]);
		if (std::cin.eof())
			exit(-1);
	}
}

void		Contact::PreviewContact(void)
{
	std::string str[1];
	str[0] = mContent[0].substr(0, 5);
	if (mContent[0].length() >= 5)
		str[0][4] = '.';
	else
		str[0].append(5 - mContent[0].length(), ' ');
	std::cout<<str[0]<<std::endl;
}

void		Contact::ViewContact()
{
	for (int i = 0; i < DATA_NUM; i++)
		std::cout<<mCate[i]<<" : "<<mContent[i]<<std::endl;
	std::cin.ignore();
}

std::string Contact::mCate[DATA_NUM] =
{
	"Full Name", "Phone #"
};