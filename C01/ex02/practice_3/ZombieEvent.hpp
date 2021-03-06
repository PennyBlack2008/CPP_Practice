/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:26:50 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 20:27:47 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void		setZombieType(const std::string& type);
		Zombie*		newZombie(const std::string& name);
		Zombie*		randomChump(void);
	private:
		std::string	type;
};

void				program_print(void);

#endif