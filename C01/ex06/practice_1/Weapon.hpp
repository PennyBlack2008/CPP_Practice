/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:48:47 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 14:23:24 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class		Weapon
{
	public:
		Weapon(std::string const &type);
		void	setType(const std::string& type);
		const std::string&	getType(void) const;
	private:
		std::string		mType;
};

#endif