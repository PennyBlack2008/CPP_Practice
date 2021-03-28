/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:58:14 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 14:35:16 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon)
	: mName(name)
	, mWeapon(weapon)
{
}

HumanA::~HumanA()
{
}

/*
main 문에서 club.setType("some other...") 함수를 적용시키려면
this->mType 의 주소가 생성자의 파라미터인 type 과 동일해야한다.
그래야만 club 의 identity 가 변경된다. 쉽게 생각하면 포인터를 안쓰고
레퍼런스를 사용해 함수를 직접적으로 변경하지 않고도 함수안의 변수를
원하는 의도대로 변경하여 사용한 효과를 볼 수 있다.
*/

void		HumanA::attack(void) const
{
	std::cout << this->mName << " attacks with his " << this->mWeapon.getType() << std::endl;
}