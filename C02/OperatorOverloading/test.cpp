#include <iostream>
#include <fstream>

int main()
{
	std::filebuf fb;
	fb.open("test.txt", std::ios::out);
	std::ostream os(&fb);
	os << "Test sentence\n";
	fb.close();
	return (0);
}
