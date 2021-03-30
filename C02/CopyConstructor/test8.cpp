#include <iostream>
using namespace std;
// 얕은 복사는 가리키는 것을 복사하는 것.
// 내용은 복사가 안됨.
class CTest
{
	public:
		CTest() 
		{
			cout << "CTest()" << endl;
			m_pData = new int(5);
		}
		CTest(const CTest& rhs)
		{
			cout << "CTest(const CTest&)" << endl;
			//this->m_pData = rhs.m_pData; // <-- 이런 식으로 하면 동적할당이 제대로 복붙이 안됨.
			this->m_pData = new int (*rhs.m_pData);
		}
		~CTest() 
		{ 
			cout << "~CTest()" << endl;
			delete m_pData;
	   	}
		void SetData(int nParam)
		{
			*m_pData = nParam;
		}
		int GetData()
		{
			return *m_pData;
		}

	private:
		int* m_pData = nullptr;
};

#include <iostream>
using namespace std;

int main(void)
{
	CTest a;
	CTest b(a); // <--- 복사 생성자

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	return 0;
}
