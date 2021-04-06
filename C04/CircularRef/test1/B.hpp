class A;
// #include "A.hpp"
#include <iostream>

class B
{
public:
	B() {}
	void call(A* moduleA);
	void printB();
};