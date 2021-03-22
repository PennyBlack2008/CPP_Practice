#include "Pony.hpp"

void ponyOnTheHeap(const char *str)
{
	Pony *pony = new Pony(str); // 생성자 메시지 출력
	delete pony; // 소멸자 메시지 출력
}

void ponyOnTheStack(const char *str)
{
	Pony pony(str);
}

int main(void)
{
	std::cout<<"\n----- ponyOnTheHeap -----\n";
	ponyOnTheHeap("AAA");
	ponyOnTheHeap("BBB");

	std::cout<<"\n----- ponyOnTheStack -----\n";
	ponyOnTheStack("CCC");
	ponyOnTheStack("DDD");
	return (0);
}

