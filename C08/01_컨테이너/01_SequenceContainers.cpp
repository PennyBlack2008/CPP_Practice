
/*
 * 동적 배열.
 * 원소가 되는 객체를 삽입하거나 삭제 시
 * 자동으로 자신의 크기를 조정
 * push_back, end, begin, back, front, size
 * 보통 끝에 삽입. push_back
 * 벡터에 push_front 는 없다.
 */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
	{
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);
		for (auto& itr : vec)
			cout << itr << " ";
		cout << "\n";
	}
}
