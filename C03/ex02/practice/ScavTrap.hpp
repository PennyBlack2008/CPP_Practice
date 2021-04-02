/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:21:14 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 15:56:50 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class		ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other); /* 복사 생성자 */
		~ScavTrap(void);

		ScavTrap&				operator=(const ScavTrap& other);
		void					rangedAttack(const std::string& target);
		void					meleeAttack(const std::string& target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		void					challengeNewcomer(void);
		const unsigned int&		getHitPoints(void) const;
	private:
		unsigned int	mHP;
		unsigned int	mHP_Max;
		unsigned int	mMP;
		unsigned int	mMP_Max;
		unsigned int	mLv;
		std::string		mName;
		unsigned int	mMeleeAttackDamage;
		unsigned int	mRangedAttackDamage;
		unsigned int	mArmorDamageReduction;
		static std::string mFunnyAttackList[5];
};

#endif