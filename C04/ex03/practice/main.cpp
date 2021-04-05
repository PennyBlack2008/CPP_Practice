/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:34:52 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 12:34:52 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
여기서 배우는 것

순환 참조 해결법: 서로가 서로의 헤더파일을 참조하여 컴파일 오류 및 논리적 오류가 생긴다.
				이것이 순환 참조이고, 이것을 해결하려면,
				어느 한 쪽에서 class 전방 선언을 해줘야한다. 이 코드에서는
				AMateria.hpp 에서 ICharacter 가 전방선언되어 있다.
				이 때, main 문에서 다른 클래스처럼 선언하지 못하고 항상
				포인터로 선언해줘야한다. 그렇지 않으면 컴파일러가 정해진 사이즈를 찾으려고
				계속해서 헤매기 때문이다. 만약 꼭 포인터로 선언이 불가능하다면, 해당 함수의
				클래스.cpp 에서 선언하여 사용하면 된다.
*/
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
