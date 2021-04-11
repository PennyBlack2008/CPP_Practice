/*
- C++ 템플릿 도입
- 클래스 템플릿과 함수 템플릿
- 템플릿 인스턴스화와 템플리 특수화
- 함수 객체
- 타입이 아닌 템플릿 인자
- 디폴트 템플릿 인지
*/

/*
함수 템플릿

정 의
- 함수의 일반화된 선언을 의미

장 점
- 함수 템플릿으로 같은 알고리즘을 기반으로 하면서, 서로 다른 타입에서 동작하는 
	함수를 한 번에 정의할 수 있다.
	--> 임의의 타입으로 작성된 함수에 특정 타입을 매개변수로 전달하면, 
		C++ 컴파일러는 해당 타입에 맞는 함수를 생성해줍니다.
*/

/*
typename T 에서 T 가 의미하는 것이 무엇인가?
어떠한 타입도 들어갈 수 있도록 만든 건가? -> 그렇다. T 말고 aT 로 해도된다.
a 라는 소문자가 typename 에 들어가도 된다.

여기서 동작 방식이 함수 swap 에 int 형이 인자가 첫번째로 들어간다면, 두번째도
반드시 int 형이어야한다.
*/
#include <iostream>
#include <string>
using namespace std;
template <typename aT>

void Swap(aT& a, aT& b)
{
	aT temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int c = 2, d = 3;
	cout << "c : " << c << ", d: " << d << endl;
	Swap(c, d);
	cout << "c : " << c << ", d: " << d << endl;

	string e = "hong", f = "kim";
	cout << "e : " << e << ", f: " << f << endl;
	Swap(e, f);
	cout << "e : " << e << ", f: " << f << endl;
	return (0);
}
