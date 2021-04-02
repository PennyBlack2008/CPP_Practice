/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:08:04 by jikang            #+#    #+#             */
/*   Updated: 2021/04/02 12:55:11 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ctime>
# include <cstdlib>
# include <string>
# include <iostream>

# define DEFAULT	"\e[0;0m"
# define RED		"\e[0;31m"
# define GREEN		"\e[0;32m"
# define YELLOW		"\e[0;33m"
# define CYAN		"\e[0;36m"
# define PURPLE		"\e[0;35m"

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
		static std::string mFunnyAttackList[5];
};

void		printWelcome(void);
#endif