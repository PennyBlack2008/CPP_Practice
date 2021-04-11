#include "iter.hpp"

int main(void)
{
	int arr1[2] = { 1, 2 };
	iter(arr1, 2, func);
	
	std::string arr2[3] = { "jinbkim", "hjung", "seobaek" };
	iter(arr2, 3, func);
	return (0);
}
