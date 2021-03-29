/*
std::size_t found 의 의미는 나중에 다른 링크에서 찾아보자.
*/
#include <iostream>
#include <string>

int main()
{
	//                0         1         2         3         4         5
	//                0123456789012345678901234567890123456789012345678901
	std::string str ("There are two needles in this haystack with needles.");
	std::string str2 ("needle");

	// different member version of find in the same order as above:
	std::size_t found = str.find(str2);
	if (found != std::string::npos) // <-- 다른 링크에서 사용법 확인 가능
		std::cout << "first 'needle' found at: " << found << '\n';

	// 여기서 found 계산 전의 found 의 값은 14인데..
	std::cout << "found is " << found << '\n';
	//                01234567890123456
	// !!! find(스트링, 숫자, 숫자) 일 경우!
	// 여기서 find 의 의미는 str 의 45번째 부터 첫번째 파라미터의 6번째까지의 단어를 찾는다는 뜻
	found = str.find("needles are small", 45, 6);
	if (found != std::string::npos)
		std::cout << "second 'needle' found at: " << found << '\n';

	found = str.find("haystack");
	if (found != std::string::npos)
		std::cout << "'haystack' also found at: " << found << '\n';
	// 아마 found 는 30이지 않을까?

	found = str.find('.');
	if (found != std::string::npos)
		std::cout << "Period found at: " << found << '\n';
	// !!! find(숫자, 숫자, 스트링)
	// srr.replace(14, 6, "preposition")
	str.replace(str.find(str2), str2.length(), "preposition");
	std::cout << str << '\n';

	return (0);
}