#include <iostream>
#include <string>
using namespace std;
class Int {
    int x;
  
public:
    Int(int x_in = 0)
        : x{ x_in }
    {
        cout << "Conversion Ctor called" << endl;
    }
    operator string()
    {
        cout << "Conversion Operator" << endl;
        return to_string(x);
    }
};
// int 이면 Conversion Ctor called
// stirng 이면 Conversion Operator
int main()
{
    Int obj(3); // Conversion Ctor called
    string str = obj; // Conversion Operator, string 으로 케스팅
    obj = 20; // Conversion Ctor called
    string str2 = static_cast<string>(obj); // Conversion Operator (obj 의 케스팅)
    obj = static_cast<Int>(30); // Conversion Ctor called
    return 0;
}

/*
1. When obj is created then constructor is called which in our case is also a Conversion Constructor(For C++14 rules are bit changed).
2. When you create str out of obj, compiler will not thrown an error as we have defined the Conversion operator.
3. When you make obj=20, you are actually calling the conversion constructor.
4. When you make str2 out of static_cast, it is quite similar to string str=obj;, but with a tight type checking.
5. When you write obj=static_cast<Int>(30), you are converting 30 into Int using static_cast.
*/