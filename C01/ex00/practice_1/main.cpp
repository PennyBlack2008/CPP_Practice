#include "Pony.hpp"
//#include <unistd.h>

/*
** Heap 으로 선언되면,
** ponyOnTheHeap 은
** delete pony 이후에
** pony 는 사라진다.
*/

void ponyOnTheHeap(void)
{
	Pony* pony;

	pony = new Pony("pony on heap");
	pony->Cry();
	pony->Run();
	delete pony;
	//std::cout<<"\ndeleted pony"<<std::endl;
	//usleep(5000000);
}

/*
** Stack 으로 선언되면,
** ponyOnTheStack 함수 종료시에
** pony 는 사라진다.
*/
void ponyOnTheStack(void)
{
	Pony pony("pony on stack");
	pony.Cry();
	pony.Run();
	//std::cout<<"\nlorem ipsum"<<std::endl;
	//usleep(5000000);
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
