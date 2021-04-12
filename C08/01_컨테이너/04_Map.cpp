/*
 * map
 * #include <map>
 * Key 를 기준으로 자동으로 정렬
 * Key 로 Value 에 접근
 * Key 는 중복이 되지 않는다.
 * Key 와 Value 를 pair 로 삽입하거나
 * [key] = value 형식으로 삽입.
 * first => Key
 * second => Value
 */

#include <map>
#include <iostream>

using namespace std;
int main()
{
	{
		std::map<char, int> userMap;
		userMap['a'] = 10;
		userMap['b'] = 20;
		userMap.insert(make_pair('c', 50));

		cout << userMap['a'] << "\n";
		userMap.insert(make_pair('a', 100));
		cout << userMap['a'] << "\n";

		cout << userMap.size() << "\n";

		for (auto& itr : userMap)
			cout << "Key = " << itr.first << "	" << "Value = " << itr.second << "\n";
		cout << "\n";
	}
}
