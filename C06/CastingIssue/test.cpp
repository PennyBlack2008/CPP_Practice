#include <iostream>
using namespace std;
class A
{
	public:
		virtual ~A(){cout << "A 소멸자" << endl;}
		virtual void sound()
		{
			cout << "A" << endl;
		}
};
class B : public A
{
	public :
		~B(){cout << "B 소멸자" << endl;}
	void sound()
	{
		cout << "B" << endl;
	}
};
/*
dynamic casting 불가능
논리적 오류라 null 출력
*/
int main()
{
	A *a = new A;
	B *b;
	b = dynamic_cast<B *>(a);
	if (b == NULL)
		cout << "null" << endl;
	return (0);
}