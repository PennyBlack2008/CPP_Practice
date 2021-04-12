/*
 * 정렬 된 컨테이너
 * set
 * #include <set>
 * insert 함수로 삽입함.
 * 자동으로 정렬된다.
 * 원소가 중복이 되지 않는다.
 *		삽입하려는 아이템이 이미
 *		set 안에 있어 중복이
 *		된다면, 삽입되지 않고
 *		무시한다.
 */

#include <set>
#include <iostream>

using namespace std;
int main()
{
	{
		std::set<string> strSet;

		strSet.insert("Hello");
		strSet.insert("World");
		strSet.insert("Hello"); // 무시됨.

		cout << strSet.size() << "\n";

		for (auto& itr : strSet)
			cout << itr << "	";
		cout << "\n";
	}
}
