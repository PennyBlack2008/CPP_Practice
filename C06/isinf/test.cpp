#include <stdio.h>
#include <math.h>

int main()
{
	printf("isinf(0.0)			: %d\n", isinf(0.0)); // 0
	printf("isinf(1.0/0.0)		: %d\n", isinf(1.0/0.0)); // 1
	printf("isinf(-1.0/0.0)		: %d\n", isinf(-1.0/0.0)); // 1
	printf("isinf(sqrt(-1.9))	: %d\n", isinf(sqrt(-1.9))); // 0
	return (0);
}
