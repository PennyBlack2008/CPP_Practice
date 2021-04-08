#include <iostream>
#include <cstdio>

using namespace std;

class Shape
{
public:
	virtual void draw() { cout << "shape : called draw()" << endl; }
private:
	int a;
};

class Triangle : public Shape
{
public:
	Triangle() { b = 30; }
	void draw() { cout << "triangle : called draw()" << endl; }
	void onlyTriangle() {
		cout << "triangle : onlyTriangle()" << endl;
		cout << b << endl;
	}
private:
	int b;
};

int main(void)
{
	// 1. upcast
	Shape *ps; // 부모 클래스 타입 포인터
	Triangle t; // 자식 클래스 인스턴스
	/* Triangle(자식) 포인터를 Shape(부모) 포인터로 캐스팅 */
	ps = static_cast<Shape *>(&t);
	cout << "//1. upcast //\n";
	ps->draw(); // <--- 사실 상 Triangle(자식)

	// 2. downcast
	Shape s; // 부모 클래스 인스턴스
	Triangle *pt; // 자식 클래스 타입 포인터
	cout << "\n//2. downcast//\n";
	/* Shape(부모) 포인터 타입을 Triangle(자식) 포인터 타입으로 캐스팅*/
	pt = static_cast<Triangle*>(&s);
	pt->draw();
	pt->onlyTriangle();
	// 허용은 된다. but, 자식 클래스의 멤버 함수를 부르면 예상값과 다르게 나온다.
	// 부모 클래스 인스턴스가 자식 멤버 함수를 부르는 것이 비 정상적인 결과를 초래할 수 있다.
}