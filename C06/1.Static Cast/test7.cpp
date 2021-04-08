#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	// 배열은 타입이 같은 포인터로 캐스팅 가능
	// 1. array -> point
	int arr[10] = {11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int* ptr;
	ptr = static_cast<int*>(arr);
	cout << "1. int array -> int * : ";
	for (int i = 0; i < 10; i++)
		cout << ptr[i] << " ";
	printf("\n");

	// 2. char* -> int*
	char str[] = "BlockDMask";
	int* ptr2;
	// ptr2 = static_cast<int*>(str); // compile error
	// cout << *ptr2 << endl;

	// 3. int* -> char*
	int tmp = 10;
	int* ptr3 = &tmp;
	// char* c = static_cast<char*>(ptr3); // compile error
	// cout << "3. int* -> char* : " << *c << endl;

	return (0);
}