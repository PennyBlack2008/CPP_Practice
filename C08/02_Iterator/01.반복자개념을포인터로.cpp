/*
 * 반복자 개념을 포인터로 적용한 예제
 *
 * 정수형 배열을 가리키는 포인터 it 를 선언하고,
 * 배열의 첫 번째 요소의 번지에서 시작하여 끝 다음점
 * 요소 직전까지 순회하면서 *it 를 출력하면 배열 요소
 * 전체가 출력된다.
 */

#include <iostream>

using namespace std;

int main(void)
{
	int ari[] = { 1, 2, 3, 4, 5 };
	int *it;
	for (it = &ari[0]; it != &ari[5]; it++)
		printf("%d\n", *it);
}
