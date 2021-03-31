/*
기본 복사 생성자
- 기본적으로 제공되는 생성자 중 하나
- 객체간의 변수의 값을 복사해준다.
- 호출시키는 객체의 선언과 동시에 초기화할 때 발생한다.

복사 생성자의 호출 시점
- 객체의 선언과 동시에 초기화 될 때
- 함수에 매개변수로 객체를 전달할 때
- 반환값으로 객체를 반환할 때
*/

#include <iostream>
using namespace std;

class Test
{
	private:
		int		a;
		int*	b;
		int*	c;
	public:
		Test()
		{
			a = 0;
			b = &a;
			c = new int[1];
			c[0] = 10;
		}
		~Test()
		{
			delete [] c;
		}
};

// 기본적으로 제공되는 생성자는 얕은 복사이다.
// 객체 생성시 두개자 방법이 있다.(C 언어 스타일, C++ 스타일)
// 1. 클래스 명 생성할 객체 = 이미 생성된 객체 <--- 암묵적인 형변환 조심
// 2. 클래스 명 생성할 객체(이미 생성된 객체)

int main()
{
	Test A;
	Test B(A);
}

/*
이 코드의 경우, 소멸자에서 동적할당을 해제한다.
B 는 얕은 복사를 사용해 A 와 같은 주소를 사용하기 때문에,
실행결과 소멸 시 오류가 나타난다.
*/