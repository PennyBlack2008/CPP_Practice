/*
 * 동적 배열이다.
 * 시작과 끝에서 삽입과 삭제를 수행하는 벡터
 * push_front, push_back
 * <vector> 와 달리 push_front 가 있다.
 */

#include <deque>
#include <iostream>

using namespace std;
int main()
{
	{
		std::deque<int> deq;
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}
		for (auto& itr : deq)
			cout << itr << " ";
		cout << "\n";
	}
}
