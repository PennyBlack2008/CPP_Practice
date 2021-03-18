#include "Info.hpp"

void		Info::InputInfo(void)
{
	std::string str[DATA_NUM];
	
	for (int i = 0; i < DATA_NUM; i++)
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
}
