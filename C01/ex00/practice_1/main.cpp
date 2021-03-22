#include "Pony.hpp"
//#include <unistd.h>

void ponyOnTheHeap(void)
{
	Pony* pony;

	pony = new Pony("pony on heap");
	pony->Cry();
	pony->Run();
	delete pony;
}

void ponyOnTheStack(void)
{
	Pony pony("pony on stack");
	pony.Cry();
	pony.Run();
	//	usleep(1000000);
}

int main(void)
{
	std::cout << std::endl;
	std::cout << "-----ponyOnTheHeap-----" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << std::endl;
	std::cout << "-----ponyOnTheStack-----" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl << std::endl;
	return (0);
}
