#include <iostream>

using namespace std;
int main()
{
	int a = 10;
	char c = 'a';

	// pass at compile time, may fail at run time
	int* q = (int*)&c;
	int* p = static_cast<int*>(&c);
	return (0);
}
/*
test1.cpp:11:11: error: static_cast from 'char *' to 'int *' is not allowed
        int* p = static_cast<int*>(&c);
                 ^~~~~~~~~~~~~~~~~~~~~
1 error generated.
*/