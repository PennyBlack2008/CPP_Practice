/*
클래스나 클래스 탬플릿 내에 또 다른 템플릿을 중첩하여 정의할 수 있다.
멤버 템플릿 중에서도 클래스 템플릿을 중첩 클래스 템플릿(nested class template).라고 한다.
*/

template <typename T>
class X
{
    template <typename U>
    class Y
    {
        ...
    }
    ...
    }
 
int main(void)
{
    ...
}
 
template <typename T>
template <typename U>
X<T>::Y<U>::멤버함수이름()
{
    ...
}