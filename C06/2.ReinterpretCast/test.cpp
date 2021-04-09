#include <iostream>
#include <cstdio>
using namespace std;

struct Cube
{
	int a;
};

int main(void)
{
	int a = 71234561;
	int *ptr1 = reinterpret_cast<int *>(a);

	int *ptr2 = &a;
	char *c;
	c = reinterpret_cast<char *>(ptr2);
	cout << "2. int* -> char * (cout) : " << *c << endl;
	printf("2. int* -> char * (printf int type) : %d\n", *c);

	Cube cb;
	cb.a = 20;
	int* ptr3;
	ptr3 = reinterpret_cast<int *>(&cb);
	cout << "3. struct -> int * : " << *ptr3 << endl;

	return (0);
}