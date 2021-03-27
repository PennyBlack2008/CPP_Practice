#include <iostream>

/*
   레퍼런스를 표시하는 방법이 솔직히 헷갈린다.
   그런데 일단, 레퍼런스로 삼을 원본의 type 만
   잘 맞춰주는 것만 조심하면 그냥 그자체가 되어버린다.
   심볼릭 링크와 하드 링크가 있으면 하드링크인 정도?
   밑의 예제에서 str = ref
*/

int	main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string*	ptr = &str;
	std::string&	ref = str;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	/*
	std::cout << "str address : " << &str << '\n';
	std::cout << "ptr address : " << &ptr << '\n';
	std::cout << "ref address : " << &ref << '\n';

	str = "str variable changed";
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;

	ref = "changed";
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	*/
	return (0);
}
