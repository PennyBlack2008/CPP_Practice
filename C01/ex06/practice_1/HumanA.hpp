/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:53:44 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 14:25:11 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

/*
이 문제에서 A 는 Weapon 을 스트링 클래스로 받는다. 그리고 이 스트링 클래스를 이용해
공격을 할 것이다. 그런데 이 때, type 을 꼭 레퍼런스로 받아야한다. 그래야만 type 으로
받은 클래스가 갖고 있는 메소드를 이용할 수 있기 때문이다.
그래서 생성자에서 이 값을 레퍼런스로 받고 A 의 클래스의 멤버 변수의 클래스도 레퍼런스형으로
선언한 것이다. 지금까지 const Weapon &mWeapon 인 이유를 설명했다.
*/

class	HumanA
{
	public:
		HumanA(const std::string& name, const Weapon& weapon);
		~HumanA();
		void	attack(void) const;
	private:
		std::string		mName;
		const Weapon&	mWeapon;
};

#endif