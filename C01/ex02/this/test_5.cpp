#include <iostream>
#include <stdio.h>

int main(void)
{
	int num_1 = 111;
	int *p;

	p = &num_1;

	int &ref1 = *p; // *p -> 111
	int *(&ref2) = p; // p -> 111 의 주소

	printf("%p\n", &ref1);
	printf("%p\n", ref2);
	printf("%p\n", p);
	printf("%p\n", &num_1);
	printf("%p\n", &ref2);
	
	return (0);
}
