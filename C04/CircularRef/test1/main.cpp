#include "A.hpp"
#include "B.hpp"
/*
서로의 헤더파일을 참조하지 않아도 작동한다.
왜 일까?
*/
// int main(void)
// {
// 	A *a;
// 	B *b;

// 	a->call(b);
// 	b->call(a);

// 	return (0);
// }

// int main(void)
// {
// // 컴파일 된다.... 응?
// 	A a;
// 	B b;

// 	a.call(&b);
// 	b.call(&a);

// 	return (0);
// }

int main(void)
{
	// 이것도 컴파일 된다.
	A a;
	B b;

	a.printA();
	b.printB();

	return (0);
}