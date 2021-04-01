/*
이 문제의 의도를 정확히 모르겠습니다. 
제가 생각하기로는 내부적으로 Float Point 를 Fixed Point 로 비트 변환하여 저장하는 게 목표인 것같습니다.
https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

Float Point 를 Fixed Point 로 비트 변환하여 저장하는 법.
(i) Calculate 숫자 = floating_input * 2^(fractional_bits)
(ii) Round x to the nearest whole number (e.g. round(숫자) )
(iii) Store the rounded 숫자 in an integer container.


*/

#include "Fixed.hpp"

int		main(void)
{
	Fixed			a;
	Fixed const		b( 10 );
	Fixed const		c( 42.42f );
	Fixed const		d( b );

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << a << std::endl;
	std::cout << "c is " << a << std::endl;
	std::cout << "d is " << a << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << a.toInt() << " as integer" << std::endl;
	std::cout << "c is " << a.toInt() << " as integer" << std::endl;
	std::cout << "d is " << a.toInt() << " as integer" << std::endl;

	return 0;
}
