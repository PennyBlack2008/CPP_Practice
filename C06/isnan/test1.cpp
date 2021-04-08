#include <stdio.h>
#include <math.h>
#include <float.h>

int main(void)
{
	printf("isnan(NAN)			= %d\n", isnan(NAN)); // 1
	printf("isnan(INFINITY)		= %d\n", isnan(INFINITY)); // 0
	printf("isnan(0.0)			= %d\n", isnan(0.0)); // 0
	printf("isnan(DBL_MIN/2.0)	= %d\n", isnan(DBL_MIN/2.0)); //0
	printf("isnan(0.0/0.0)		= %d\n", isnan(0.0/0.0)); // 1
	printf("isnan(Inf - Inf)	= %d\n", isnan(INFINITY - INFINITY)); // 1

}