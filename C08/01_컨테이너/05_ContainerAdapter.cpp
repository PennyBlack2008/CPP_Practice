/*
 * Container 위에서 돌아가는 자료구조.
 * 보통 디폴트로 vector 로 구현됨.
 * push : copy 해서 삽입
 * emplace : 새로운 객체를 만들어서 삽입
 * 
 * top
 * - 스택에서 가장 위에 있는것
 * - 가장 최근에 삽입된 것
 *
 * pop
 * - 가장 위에 있는 것을 삭제
 * - 가장 최근에 삽입된 것을 삭제
 */

#include <stack>
#include <iostream>

using namespace std;
int main()
{
	{
		std::stack<int> userStack;
		userStack.push(1);
		userStack.emplace(2);
		userStack.emplace(3);

		cout << userStack.top() << "\n";
		userStack.pop();
		cout << userStack.top() << "\n";
	}
}
