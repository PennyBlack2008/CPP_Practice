#include "Character.hpp"


// Character 객체도 cout에 출력이 되도록 <<연산자 오버로딩
std::ostream &operator<<(std::ostream &os, const Character &ref)
{
	if (ref.getWeapon())
		os<<ref.getName()<<" has "<<ref.getAP()<<" AP and wields a "<<ref.getWeapon()->getName() <<'\n';
	else
    	os<<ref.getName()<<" has "<<ref.getAP()<<" and is unarmed.\n";
	return (os);
}