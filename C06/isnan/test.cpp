#include <stdio.h>
#include <math.h>

int main()
{
	printf("isnan(0.0)				: %d\n", isnan(0.0)); // 0
	printf("isnan(0.0/0.0)			: %d\n", isnan(0.0/0.0)); // 1
	printf("isnan(1.0/0.0)			: %d\n", isnan(1.0/0.0)); // 0
	printf("isnan(-1.0/0.0)			: %d\n", isnan(-1.0/0.0)); // 0
	printf("isnan(sqrt(-1.0))		: %d\n", isnan(sqrt(-1.0))); // 1
	return (0);
}