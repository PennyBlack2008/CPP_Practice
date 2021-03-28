/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:18:34 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 14:29:39 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string& name);
		void	setWeapon(const Weapon& type);
		void	attack(void) const;
	private:
		std::string		mName;
		const Weapon*	mWeapon;
};

#endif