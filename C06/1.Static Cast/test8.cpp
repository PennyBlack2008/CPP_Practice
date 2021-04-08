#include <iostream>
#include <cstdio>

using namespace std;

enum E_VAL {A = 11, B, C};

int main(void)
{
	E_VAL e = A;
	cout << "E_VAL : " << e << endl;

	int a;
	a = static_cast<int>(e);
	cout << "1. static_cast<int>(enum) : " << a << endl;

	int b;
	b = static_cast<int>(B);
	cout << "2. static_cast<int>(enum) : " << b << endl;

	// 열거형 static_cast
	E_VAL e2;
	e2 = static_cast<E_VAL>(13);
	cout << "3. static_cast<enum>(int) : " << e2 << endl;

	return (0);
}