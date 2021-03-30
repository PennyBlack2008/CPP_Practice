/*
 * 이 코드의 경우, 직접 복사 생성자를 설정하여, 새로 할당 받은 공간에
 * 값을 복사하는 형식을 취해줬다. 그래서 실행 시 문제가 발생하지 않는다.
 *
 * 깊은 복사 생성자를 만들 시에는, 포인터 변수와 동적할당에 관한 부분을
 * 신경써서 만들어야한다. (복사 생성자를 만들 시, 반드시 매개변수를 레퍼런
 * 스로 전달해야한다.
*/
#include <iostream>
using namespace std;

class Test
{
	private:
		int		a;
		int*	b;
		int*	c;
	public:
		Test()
		{
			a = 0;
			b = &a;
			c = new int[1];
			c[0] = 10;
		}
		Test(const Test& tcv)
		{
			a = tcv.a;
			b = new int;
			*b = *tcv.b;
			c = new int;
			memcpy(c, tcv.c, sizeof(int));
		}
		~Test()
		{
			delete[] c;
		}
};

int main()
{
	Test A;
	Test B(A);
}
