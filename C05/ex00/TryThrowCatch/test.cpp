#include <iostream>

using namespace std;
/*
a, b 를 선언하고, b 로 a 를 나눈 값을 계산하는 문제
b 가 0보다 작거나 같으면 예외상황으로 출력함.

여기서 expn 은 cin 에서 들어온 에러를 일으키게 한 그 값! 을 저장하는 듯
*/
int main(void)
{
	int a, b;

	try
	{
		cin >> a;
		cin >> b;

		if (b <= 0)
			throw b;
		cout << "[work]" << endl;
		cout << "a : " << a << ", b : " << b << endl;
		cout << "a/b : " << a/b << endl;
		cout << "예외가 아닌 상황" << endl;
	}
	catch(int expn)
	{
		cout << "[error]" << endl;
		cout << "can't use this : " << expn << endl;
		cout << "예외 상황" << endl;
		cout << "what is expn ? : " << expn << endl;
	}

	cout << "Program End" << endl;
	return (0);
}