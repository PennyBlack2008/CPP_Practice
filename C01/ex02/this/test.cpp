#include <iostream>

using namespace std;

class Test
{
	char* str;
	public:
		Test();
		Test(char*);
		~Test();
		void view();
	//char* str;
};

Test::Test()
{
	str="no title";
}

Test::Test(char *str)
{
	this->str = str;
}

Test::~Test()
{
}

void Test::view()
{
	cout<<str<<endl;
}

int main(void)
{
	Test st("sample");
	st.view();

	Test st2;
	st2.view();
	return (0);
}







