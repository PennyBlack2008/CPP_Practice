/*
character 로 들어오면, atol 에서 long int 로 바꿔준다.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int li;
	char buffer[256];

	printf("Enter a long number: ");
	fgets(buffer, 256, stdin);
	li = atol(buffer);
	printf("The value entered is %ld. Its double is %ld.\n", li, li * 2);
	return (0);
}