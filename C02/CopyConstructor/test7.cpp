#include <iostream>
using namespace std;
// 얕은 복사는 가리키는 것을 복사하는 것.
// 내용은 복사가 안됨.
class CTest
{
	public:
		CTest() { cout << "CTest()" << endl; }
		CTest(const CTest& rhs) 
		{ 
			cout << "CTest(const CTest&)" << endl;
			// this->m_nData = rhs.m_nData; // 멤버 값을 단순 대입으로 복사
		}
		~CTest() { cout << "~CTest()" << endl; }

		int m_nData = 0;
};

#include <iostream>
using namespace std;

int main(void)
{
	CTest a;
	a.m_nData = 300;
	CTest b(a); // <--- 복사 생성자

	cout << &a.m_nData << endl;
	cout << &b.m_nData << endl;
	return 0;
}
