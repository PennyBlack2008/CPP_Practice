/*
 * 얕은 복사를 알아보자.
 * 얕은 복사는 멤버 대 멤버 복사를 말한다. 인수와 내용이 없는 생성자가
 * 디폴트 생성자라고 한다면, 같은 클래스 타입의 객체를 인수로 받아 멤버
 * 대 멤버 복사를 하는 생성자를 디폴트 복사 생성자라고 한다.
 *
 */ 

#include <iostream>
using namespace std;

class myClass
{
	private:
		int a;
		char *name;
	public:
		myClass()
		{
		}
		myClass(int _a, const char* _name)
		{
			a = _a;
			name = new char[strlen(_name) + 1];
			strcpy(name, _name);
		}
		/*
			myClass(const myClass& T)
			{
				a = T.a;
				name = T.name;
			}
		*/
		void showData()
		{
			cout << a << endl;
			cout << name << endl;
		}
};

int main(int argc, char *argv[])
{
	myClass A(4, "spider man");
	myClass B(A);
	B.showData();
}
