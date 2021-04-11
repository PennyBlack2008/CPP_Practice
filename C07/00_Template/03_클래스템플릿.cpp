/*
클래스 템플릿이란 클래스의 일반화된 선언.

template 함수는 선언할 때마다 위에 template <typename T> 를 
적어줘야하는 듯

다음과 같이 처음에 보면 이해가 안되지만,
각각 string 으로 들어간 "C++ 수업" 과 int 로 들어간 12 가 
제대로 Data class 에 들어가서 작동하는 것을 알 수 있다.

클래스가 template 을 활용하여 타입에 제약없이 모두 컴파일된다는 것을
알 수 있다.

이것을 클래스의 일반화
*/
#include <iostream>
using namespace std;

template <typename T>
class Data
{
public:
	Data(T dt);
	T get_data();
private:
	T data_;
};

int main(void)
{
	Data<string> str_data("C++ 수업");
	Data<int> int_data(12);

	cout << "str_data : " << str_data.get_data() << endl;
	cout << "int_data : " << int_data.get_data() << endl;
	return (0);
}

template <typename T>
Data<T>::Data(T dt)
{
	data_ = dt;
}

template <typename T>
T Data<T>::get_data()
{
	return data_;
}

