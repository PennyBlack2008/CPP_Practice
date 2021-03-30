#include <iostream>
using namespace std;
class myClass
{
	private:
		int a;
	public:
		myClass(){
		}
		myClass(int _a){
			a = _a;
		}
		/*
		myClass(const myClass &T) {
			a = T.a;
		}
		*/
		void showData()
		{
			cout << a << endl;
		}
};

int main(int argc, char *argv[])
{
	myClass A(4);
	myClass B(A);
	
	B = A;
	B.showData();
}

/*
 * 결과는 4가 나오고 멤버 변수의 복사가 되었다. 그런데, 왜 클래스의 멤버
 * 변수는 대입연산 시 자동으로 복사가 되는 것일 까? 
 * 위 코드에서 14 ~ 16 라인을 보면, 이 부분이 복사생성자 부분이다.
 * 주석처리를 하더라도 디폴트 복사 생성자가 자동으로 호출된다.
 * 인수로 자신의 클래스타입의 객체 레퍼런스를 받는다. 이 생성자를 제대로
 * 쓰려면 이렇게 해야한다.
 * int main(int argc, char *argv[])
 * {
 *		myClass A(4);
 *		myClass B(A);
 *		B.showData();
 * }
 */
