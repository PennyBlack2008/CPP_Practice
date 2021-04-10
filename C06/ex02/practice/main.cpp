#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base*		generate(void)
{
	Base*	p;

	srand(clock());
	int		num = rand();
	if (num % 3 == 0)
		return (p = new A);
	else if (num % 3 == 1)
		return (p = new B);
	else
		return (p = new C);
}

void	identify_from_pointer(Base*	p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A Class." << '\n';
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B Class." << '\n';
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C Class." << '\n';
}

void	identify_from_reference(Base& p)
{
	try
	{
		Base &ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "This is A Class." << '\n';
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base& ref = dynamic_cast<B&>(p);
		(void)ref;
		std::cout << "This is B Class." << '\n';
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base& ref = dynamic_cast<C&>(p);
		(void)ref;
		std::cout << "This is C Class." << '\n';
	}
	catch(const std::exception& e)
	{
	}
}

int main(void)
{
	srand(clock());
	Base*	p;
	p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	delete p;
}
