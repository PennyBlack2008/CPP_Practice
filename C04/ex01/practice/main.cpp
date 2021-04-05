/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:29:01 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:04:26 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	//me has 40 AP and is unarmed$
	
	Enemy* b = new RadScorpion();
	// * click click click *
	
	AWeapon* pr = new PlasmaRifle(); // 사실상 Plasma 이고 당연히 AWeapon 의 특성 모두 갖고 있음.
	AWeapon* pf = new PowerFist(); // 사실상 PowerFist() 이고 당연히 AWeapon 의 특성 모두 갖고 있음.
	
	me->equip(pr);
	std::cout << *me;
	// me has 40 AP and wields a Plasma Rifle$
	me->equip(pf);
	
	me->attack(b);
	// me attacks RadScorpion with a Power Fist$
	// * pschhh... SBAM! *$
	
	std::cout << *me;
	// me has 32 AP and wields a Power Fist$
	me->equip(pr);

	std::cout << *me;
	// me has 32 AP and wields a Plasma Rifle$
	
	me->attack(b);
	// me attacks RadScorpion with a Plasma Rifle$
	// * piouuu piouuu piouuu *$

	std::cout << *me;
	// me has 27 AP and wields a Plasma Rifle$
	
	me->attack(b);
	// me attacks RadScorpion with a Plasma Rifle$
	// * piouuu piouuu piouuu *$
	// * SPROTCH *$
	
	std::cout << *me;
	// me has 22 AP and wields a Plasma Rifle$
	return 0;
}
