#include <string>
#include <iostream>
#include <sstream>

/*
   ostringstream 클래스는 뭘까?
   */

int main()
{
	std::ostringstream	oss;
	oss << "One hundred and one: " << 101;
	std::string s = oss.str();
	std::cout << s << '\n';
	return 0;
}
