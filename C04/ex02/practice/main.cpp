/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:31:44 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:19:37 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 깊은 복사를 알아보는 문제
 - 깊은 복사를 할 때는 복사를 할 대상의 클래스에서 클래스의 멤버 중 동적할당이 되어 있다면,
	동적할당 된 멤버를 다시 동적할당을 해줄 함수가 따로 필요하다.
*/
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	// Tactical Marine ready for battle!$
	ISpaceMarine* jim = new AssaultTerminator;
	// * teleports from space *$
	
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		// Marine: For the holy PLOT!$
		// AT: This code is unclean. PURIFY IT!$
		cur->rangedAttack();
		cur->meleeAttack();
		/* Marine
		 * attacks with a bolter *$ Range
		 * attacks with a chainsword *$ Melee
		 */
		/* AT
		 * does nothing *$ Range
		 * attacks with chainfists *$ Melee
		 */
	}
	delete vlc;
	// Aaargh...$
	// I'll be back...$


	// /* test 용 */
	// Squad	s1;
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;

	// s1.push(bob);
	// s1.push(jim);
	// s1.push(jim);


	// Squad	s2(s1);
	// std::cout<<"===================\n";
	// s1 = s2;
	// std::cout<<"===================\n";

	
	return 0;
}