#include <iostream>
using namespace std;

class A
{
	public:
		virtual ~A(){cout << "A 소멸자" << endl;}
		// ~A(){cout << "A 소멸자" << endl;}
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

int main()
{
	A *a;
	a = new B;
	a->sound();
	delete a;
	return (0);
}