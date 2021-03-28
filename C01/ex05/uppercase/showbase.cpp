/*
 * 16 진법으로 들어가는 20 에 0x 가 붙도록해주는
 * showbase 메소드의 역할을 알 수 있다.
 */

#include <iostream>

int main()
{
	int n = 20;
	std::cout << std::hex << std::showbase << n << '\n';
	std::cout << std::hex << std::noshowbase << n << '\n';
	return (0);
}
