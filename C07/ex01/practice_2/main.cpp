#include "iter.hpp"

int main(void)
{
	char chArr[5] = { 'a', 'b', 'c', 'd', 'e'};
	int intArr[3] = { 0, 1, 2 };
	float flArr[3] = { 1.1f, 0.0f, -9.1f };
	double douArr[5] = { 0.0, 1.1, 2.2, 3.3, 5.5};

	iter(chArr, 5, &display);
	iter(intArr, 3, &display);
	iter(flArr, 3, &display);
	iter(douArr, 5, &display);
	
	// int tab[] = { 0, 1, 2, 3, 4 };
    // iter(tab, 5, print);

	// Awesome tab2[5];
    // iter(tab2, 5, print);

	return (0);
}