class B;
// #include "B.hpp"
#include <iostream>

class A
{
public:
	A() {};
	void call(B* moduleB);
	void printA();
};