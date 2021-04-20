/*
먼저 상속을 받은 클래스의 생성과 소멸 과정을 보자. 생성자는 부모 클래스의 생성자가 먼저 불려지고,
소멸자는 자식 클래스의 소멸자가 먼저 불려지고 나서 부모 클래스의 소멸자가 불려진다.

그런데 다형성 이용을 위해 부모 클래스의 포인터로부터 자식 클래스를 호출할 때,
가상 함수로 정의되지 않은 자식 클래스의 오버라이딩된 함수를 호출하면 부모 클래스의 멤버 함수가 호출된다.
소멸자도 자식 클래스에서 오버라이딩된 함수라고 볼 수 있기 때문에 만약 부모 포인터로 객체를 삭제하면 부모 클래스의 소멸자가 호출된다.

따라서 소멸자를 가상 함수로 선언하지 않으면 이 경우 자식 클래스의 소멸자는 결코 호출되지 않는다.
가상 함수 키워드 virtual이 사용되었다면 이것은 자식 클래스에서 재정의될 수 있음을 명시하기 때문에
포인터의 종류에 상관없이 항상 자식 클래스의 메서드가 호출된다.

즉, 자식 클래스의 소멸자가 호출되고 나서 부모 클래스의 소멸자가 호출된다.

따라서 상속 관계가 있고 소멸자에서 리소스를 해제해야 하는 경우 반드시 소멸자를 가상 함수로 선언해야 한다.
*/

#include <iostream>

using namespace std;

class classA
{
public:
	classA(void);
	virtual ~classA(void);
};

class classB : public classA
{
public:
	classB(void);
	~classB(void);
};

classA::classA(void)
{
	cout << "A" << endl;
}

classA::~classA(void)
{
	cout << "~A" << endl;
}

classB::classB(void)
{
	cout << "B" << endl;
}

classB::~classB(void)
{
	cout << "~B" << endl;
}

int main(void)
{
	classA* a = new classB;

	delete a;

	return (0);
}