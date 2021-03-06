/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:54:54 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 13:51:32 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

# define DEFAULT	"\e[0;0m"
# define RED		"\e[0;31m"
# define GREEN		"\e[0;32m"
# define YELLOW		"\e[0;33m"
# define CYAN		"\e[0;36m"
# define PURPLE		"\e[0;35m"

class		ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap(void);

		ClapTrap&				operator=(const ClapTrap& other);
		void					rangedAttack(const std::string& target);
		void					meleeAttack(const std::string& target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
	protected:
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