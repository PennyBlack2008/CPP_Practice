/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:48 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 18:10:49 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class	Zombie
{
	public:
		Zombie(void);
		Zombie(const std::string& name, const std::string& type);
		~Zombie(void);
		void		announce(void) const;
		void		SetName(const std::string& name);
		void		SetType(const std::string& type);

	private:
		std::string mName;
		std::string mType;
};

#endif