/*
   클래스 안에 다른 클래스를 넣어 사용하는 과제
   사람의 주인은 뇌이다. 뇌는 사람이다.
*/

#include "Human.hpp"

int main()
{
	Human bob;

	/* bob 객체의 주소 값 출력 */
	std::cout << bob.identify() << std::endl;
	/* bob 객체의 주소 값 출력 */
	std::cout << bob.getBrain().identify() << std::endl;
}
