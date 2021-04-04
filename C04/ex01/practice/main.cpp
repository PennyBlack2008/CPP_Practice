/*
동적할당을 하는 구나
*/

int main()
{

	Character* me = new Character("me");
	std::cout << *me;
	//me has 40 AP and is unarmed$
	
	Enemy* b = new RadScorpion();
	// * click click click *
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	// me has 40 AP and wields a Plasma Rifle$
	me->equip(pf);
	
	me->attack(b);
	// me attacks RadScorpion with a Power Fist$
	// * pschhh... SBAM! *$
	
	std::cout << *me;
	// me has 32 AP and wields a Power Fist$
	// me has 32 AP and wields a Plasma Rifle$
	me->equip(pr);

	std::cout << *me;
	
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

/*
subject 출력 결과 분석

$> clang++ -W -Wall -Werror *.cpp $> ./a.out | cat -e
me has 40 AP and is unarmed$ <---------- new Character
* click click click *$ <------- RadScorpion 탄생
me has 40 AP and wields a Plasma Rifle$ me attacks RadScorpion with a Power Fist$ * pschhh... SBAM! *$
me has 32 AP and wields a Power Fist$
me has 32 AP and wields a Plasma Rifle$
me attacks RadScorpion with a Plasma Rifle$
* piouuu piouuu piouuu *$
me has 27 AP and wields a Plasma Rifle$
me attacks RadScorpion with a Plasma Rifle$
* piouuu piouuu piouuu *$
* SPROTCH *$
me has 22 AP and wields a Plasma Rifle$

*/