// Compile time cast.
// 묵시적 형변환을 한다. (int to float, point to void* 처럼)

#include <iostream>
using namespace std;

int main()
{
	float f = 3.5;
	int a = f;
	int b = static_cast<int>(f);
	cout << b;
}