#include <string>
#include <iostream>

struct Data
{
    std::string s1;
    int		n;
	std::string s2;
};

// 8글자인 랜덤 문자열(알파벳or숫자) + 랜덤 int형 변수+ 8글자인 랜덤 문자열(알파벳or숫자)
// 데이터를 직렬화함
void    *serialize(void)
{
    std::string s1 = "";
    std::string s2 = "";
    char	*ptr;
    char	alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    int		integer;

    srand(clock());  // 난수를 위해 사용하는 함수
    for (int i = 0; i < 8; i++)
    {
        s1 += alphanum[rand() % 35];  // 8글자의 랜덤 문자열(알파벳or숫자)
        s2 += alphanum[rand() % 35];  // 8글자의 랜덤 문자열(알파벳or숫자)
    }
    integer = rand();  // 랜덤 int형변수를 반환하는 함수
    ptr = new char[sizeof(s1) + sizeof(integer) + sizeof(s2)];  // 문자열2개의 크기와 int형변수의 크기만큼 메모리 할당
	std::cout<<"s1 : "<<s1<<'\n';
	std::cout<<"integer : "<<integer<<'\n';
	std::cout<<"s2 : "<<s2<<'\n';
	
    memcpy(ptr, &s1, 24);  // ptr = s1	
    memcpy(ptr + 24, &integer, 4);  // ptr = s1 + integer 
    memcpy(ptr + 28, &s2, 24);  // ptr = s1 + integer + s2
    return (ptr);
}

// 데이터를 역직렬화함
Data    *deserialize(void *raw)
{
    Data *dd = new Data;

	// reinterpret_cast<char*>(raw) 해도됨
    dd->s1 = static_cast<char*>(raw);  // raw 가리키기
	// 8byte만큼 이동하기위해 먼저 static_cast<char*>(raw)
	// dd->n = *static_cast<int*>(static_cast<char*>(raw) + 24); // 에러
    dd->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 24);  // raw+24 이후로 int 크기만큼 데이터 담기
    dd->s2 = static_cast<char*>(raw) + 28;  // raw+28 가리키기 

    return (dd);
}

int main(void)
{
	char    *ptr = static_cast<char*>(serialize());  // 랜덤데이터의 직렬화
    Data    *des = deserialize(ptr);  // 랜덤데이터를 역직렬화

    std::cout << des->s1 << std::endl;
    std::cout << des->n << std::endl;
    std::cout << des->s2 << std::endl;

    delete des;
}