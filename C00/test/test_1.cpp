#include <iostream>

using namespace std;

class Parent 
{
	public :
		virtual void v_print()
		{
			cout<<"parent"<<endl;
		}
		void print()
		{
			cout<<"parent"<<endl;
		}
};

class Child : public Parent
{
	public :
		void v_print()
		{
			cout<<"child"<<endl;
		}
		void print()
		{
			cout<<"child"<<endl;
		}
};

int main()
{
	Parent* p;
	Child c;

	p = &c;
	p->v_print();
	p->print();
	return (0);
}
