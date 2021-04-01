/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:08:04 by jikang            #+#    #+#             */
/*   Updated: 2021/04/01 22:12:40 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ctime>
# include <cstdlib>
# include <string>

class		FragTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);

		FragTrap&		operator=(const FragTrap& other);
		void			rangedAttack(const std::string& target);
		void			meleeAttack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const& target);
	private:
		unsigned int	mHP;
		unsigned int	mHP_Max;
		unsigned int	mMp;
		unsigned int	mMp_Max;
		unsigned int	mLv;
		std::string		mName;
		unsigned int	mMeleeAttackDamage;
		unsigned int	mRangedAttackDamage;
		unsigned int	mArmorDamageReduction;
};

#endif