/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:08:04 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 10:12:45 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ctime>
# include <cstdlib>
# include <string>
# include <iostream>

class		FragTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other); /* 복사 생성자 */
		~FragTrap(void);

		FragTrap&		operator=(const FragTrap& other);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const& target);
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
};

#endif