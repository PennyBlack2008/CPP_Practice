/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:48 by jikang            #+#    #+#             */
/*   Updated: 2021/03/27 13:00:33 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public:
		Zombie(void);
		Zombie(const std::string& name, const std::string& type);
		~Zombie(void);
		void		SetZombieName(const std::string& name);
		void		SetZombieType(const std::string& type);
		void		announce(void) const;

	private:
		std::string mName;
		std::string mType;
};

#endif