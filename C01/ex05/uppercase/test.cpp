/*
 * 신기하게도 첫 번째 코드에서 stdout 을
 * 16 진법, 0x 가 보이도록 하여 출력을 하게
 * 만들어 놓으면 두번째, 세번째 코드에서
 * 이 설정에 따라 출력한다.*/

#include <iostream>

int main()
{
	std::cout << std::showbase << std::hex;
	std::cout << std::uppercase << 77 << '\n';
	std::cout << std::nouppercase << 77 << '\n';
	return (0);
}
