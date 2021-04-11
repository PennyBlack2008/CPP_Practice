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
다음 예제는 Swap() 함수 템플릿에서 double형에 대한 동작만을 변경하기 위해 명시적 특수화를 사용한 예제입니다.
double 형은 따로 정의를 했기 때문에 동작이 다른 것을 알 수 있다.
*/

#include <iostream>
#include <string>
using namespace std;
template <typename T>

void Swap(T& a, T& b);
template <typename T> void Swap(T& a, T& b);

template <> void Swap<double>(double&, double&)
{
}
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
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

	double g = 90.9, h = 19.9;
	cout << "g : " << g << ", h: " << h << endl;
	Swap(g, h);
	cout << "g : " << g << ", g: " << h << endl;
	return (0);
}
