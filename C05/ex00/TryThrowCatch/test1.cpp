#include <iostream>

using namespace std;
/*
이런 식으로 try catch 의 throw 부분이 try catch 문이 존재하는 main 문 밖에 존재하더라도
정상적으로 작동을 하는 구나!
*/

void swap(int &a, int &b)
{
	int tmp;
	// 호출된 함수 내부에서 예외 처리를 하여 throw 를 통해 catch 에 보낸다.
	if (a == b)
		throw a;
	
	tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	int num1, num2;

	try
	{
		cin >> num1;
		cin >> num2;

		swap(num1, num2);

		cout << "\n[swap 완료]" << endl;
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	catch (int expn)
	{
		cout << "\n[swap 실패]" << endl;
		cout << "num1, num2 : " << expn << " 으로 동일합니다." << endl;
	}
	cout << "==== Program Ends ====" << endl;
	return (0);
}