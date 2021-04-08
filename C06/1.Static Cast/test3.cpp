#include <iostream>

using namespace std;

// 상속관계일 때의 케스팅
class Base
{
};

class Derived : public Base
{
};

int main()
{
	Derived d1;
	Base* b1 = (Base*)(&d1);
	// 명시적 변환 성공
	Base* b2 = static_cast<Base*>(&d1);
	// static 변환 성공
	return (0);
}