/*
 * 코드와 실행 설명
 *
 * ☝️  Fixed a 를 불러왔을 때,
 * (i) Default constrcutor 가 실행됨. val = 0;
 * (ii) main 문의 getRawBits 가 실행됨.
 * (iii) Destructor 가 실행됨.
 *
 * ✌️  Fixed b 를 불러왔을 때,
 * (i) 복사 생성자가 실행 됨.
 * (ii) 복사 생성자가 실행되면서 private value 를 받아옴.(이번 생성자의 멤버 변수의 값을 전과 다르게 받을 경우)
 * (iii) 복사생성자의 getRawBits 가 실행됨.
 * (iv) main 문의 getRawBits 가 실행됨.
 * (v) Destructor 가 실행됨.
 *
 * 🤟 Fixed c 를 불러왔을 때,
 * (i) Default constructor 가 실행 됨.
 * (ii) Assignation operator 가 실행 됨.
 * (iii) 연산자에서 getRawBits 로 b 로 부터 val값을 가져옴.
 * (iv) main 문의 getRawBits 를 실행함.
 * (v) Destructor 가 실행됨.
 *
 * Fixed b 는 복사생성자를 통해 객체가 만들어지고,
 * Fixed c 는 연산자 오버로딩을 통해 객체가 만들어진다.
 * 두개의 경우 모두 getRawBits()로 val 값을 받아온다.
 */
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	//Fixed b(a);
	Fixed c;

	c = a;

//	std::cout << a.getRawBits() << std::endl;
//	std::cout << b.getRawBits() << std::endl;
//	std::cout << c.getRawBits() << std::endl;
	return (0);
}
