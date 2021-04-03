/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:21:14 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:51:05 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class		ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other); /* 복사 생성자 */
		~ScavTrap(void);

		ScavTrap&				operator=(const ScavTrap& other);
		void					challengeNewcomer(void);
	private:
		static std::string mFunnyAttackList[5];
};

#endif