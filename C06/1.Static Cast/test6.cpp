#include <iostream>

using namespace std;

int main(void)
{
	double d = 13.24;
	float f = 10.12f;

	double tmp_double;
	int tmp_int;
	float tmp_float;

	tmp_int = static_cast<int>(d); // double -> int
	cout << "static_cast<int>(double) : " << tmp_int << endl;
	
	tmp_float = static_cast<float>(d); // double -> float
	cout << "static_cast<float>(double) : " << tmp_float << endl;

	tmp_double = static_cast<double>(f); // float -> double
	cout << "static_cast<double>(float) : " << tmp_double << endl;

	return (0);
}