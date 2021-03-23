#include <iostream>
// #include <unistd.h>

void memoryLeak()
{
	std::string*	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
/*
int main(void)
{
	memoryLeak();
	usleep(10000000);
	return (0);
}
*/
