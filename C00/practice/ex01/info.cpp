#include "info.hpp"

/*
 * inputInfo 는 cate 에 있는 것들을 차례로 나열하면서
 * : 를 출력.
 * getline 은 content[i] 로 부터 받아온 것들을 저장한다.
 * 근데 어디에다 저장하는 거지? cin 이니깐 STDIN?
 */

void info::inputInfo(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout<<cate[i]<<" : ";
		std::getline(std::cin, content[i]);
		if (std::cin.eof())
			exit(-1);		
	}
}

/*
 * 여기에서 사용되는 substr 는 std::string 계열함수
 * SEARCH 기능에서 10개 글자 이하로 볼 수 있음 
*/
void info::previewInfo(void)
{
	std::stirng str[3]; // 이게 변수 선언?
	// 세개의 문자열 배열을 선언한것인가?

	for(int i = 0; i < 3; i++)
	{
		str[i] = content[i].substr(0, 10);
		if (content[i].length() >= 10)
			str[i][9] = '.';
		else
			str[i].append(10 - content[i].length(), ' ');
		std::cout<<str[i];
	}
}

std::string info::cate[11] =
{
	"First Name", "Last Name", "Nickname",
	"Login", "Postal Address", "Email Address",
	"Phone Number", "Birthday Date", "Favorite Meal",
	"Underwear Color", "Darkest Secret"
};
