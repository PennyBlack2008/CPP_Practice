/*
명시적 특수화

클래스 템플릿은 함수 템플릿과 마찬가지로 특정 타입이나 값의 템플릿 인수에 대해서
특수화할 수 있다. 해당 타입에 대한 특별한 동작을 정의할 수 있다.
컴파일러는 전달된 인수에 정확히 대응하는 특수화된 정의를 발견하면, 더는 다른 템
플릿을 찾지 않고 해당 정의를 사용한다.
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

template <> class Data<double>
{
public:
	Data(double dt) { data_ = dt; } // double 형에 대한 명시적 특수화
	double get_data()
	{
		cout << "double 형 데이터를 출력합니다." << endl;
		return data_;
	}
private:
	double data_;
};

int main(void)
{
	Data<string> str_data("C++ 수업");
	Data<double> double_data(3.14);

	cout << "str_data : " << str_data.get_data() << endl;
	cout << "double_data :  " << double_data.get_data() << endl;
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










