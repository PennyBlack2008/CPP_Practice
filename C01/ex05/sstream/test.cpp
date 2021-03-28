#include <sstream>
#include <iostream>

using namespace std;

int main(void)
{
	stringstream ss1("42seoul");
	string str1;

	while (ss1 >> str1)
	{
		cout << str1 << endl;
	}
	string str2;
	string str3;
	stringstream ss2;
	ss2 << 423 << "seoul";
	ss2 >> str2 >> str3;
	cout << str2 << endl << str3 << endl;
	return (0);
}
