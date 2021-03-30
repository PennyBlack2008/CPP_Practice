// 얕은 복사는 가리키는 것을 복사하는 것.
// 내용은 복사가 안됨.
#include <iostream>
using namespace std;

int main(void)
{
	int *pA = new int(5);
	int *pB = NULL;

	pB = pA;
	
	cout << *pA << endl;
	cout << *pB << endl;

	delete pA;
	delete pB;
	return 0;
}
