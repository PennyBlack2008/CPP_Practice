/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:17:37 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:32:42 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

/*
Weapon has name, cost ap, damage
*/
class	AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon(); // 가상 함수가 있으면 소멸자도 가상 소멸자이어야한다.

	AWeapon&			operator=(const AWeapon& other);

	const std::string&	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;
	void				setName(const std::string& name);
	void				setAPCost(const int apcost);
	void				setDamage(const int damage);
	virtual void		attack(void) const = 0; // 상속 받는 Plasma, Power 에서 재정의
private:
	AWeapon(void);

	std::string				mName;
	int						mAPcost;
	int						mDamage;
};

#endif