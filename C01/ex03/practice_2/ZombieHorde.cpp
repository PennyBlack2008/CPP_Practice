/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:57:22 by jikang            #+#    #+#             */
/*   Updated: 2021/03/27 12:56:28 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
	: mN(0)
{
}

/*
생성자에서 짜면서 어려웠던 점은
첫 번째,
	이 ZombieHorde 클래스에서는 Zombie 클래스의 private 변수를
	선언할 수가 없기 때문이다. 그래서 Zombie 클래스의 public 함수로
	private 변수에 접근해야한다.
두 번째,
	mmsZom = new Zombie[N] 처럼 한꺼번에 클래스 배열처럼 동적할당을 하게 되면
	디폴트 생성자를 꼭 명시해줘야 컴파일이 된다.
*/
ZombieHorde::ZombieHorde(int N)
{
	srand(clock());
	std::string name;
	std::string type[3] = {"student", "looking for job", "programmer"};
	int size;

	mmsZom = new Zombie[N];
	this->mN = N;
	size = rand ()% 10 + 4;
	for (int i = 0; i < N; i++)
	{
		name.clear();
		for (int j = 0; j < size; j++)
			name += rand() % 26 + 'a';
		mmsZom[i].SetZombieName(name);
		mmsZom[i].SetZombieType(type[rand() % 3]);
	}
}

void		ZombieHorde::announce(void)
{
	for (int i = 0; i < mN; i++)
		mmsZom[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Before ZombieHorde deletes\n";
	delete[] mmsZom;
	std::cout << "After ZombieHorde deletes\n";
}