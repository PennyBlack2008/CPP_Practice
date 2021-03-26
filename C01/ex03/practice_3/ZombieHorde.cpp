/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:57:22 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 22:29:52 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	srand(clock());

	std::string name;
	std::string type[3] = {"student", "looking for job", "programmer"};
	int size;

	this->
}

void		ZombieHorde::announce(void)
{
	for (int i = 0; i < N; i++;)
		mmsZom[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Before ZombieHorde deletes\n";
	delete[] mmsZom;
	std::
}