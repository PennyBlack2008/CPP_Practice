/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:08:04 by jikang            #+#    #+#             */
/*   Updated: 2021/04/01 15:32:31 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ctime>
# include <cstdlib>

class		FragTrap
{
	public:
		void			rangedAttack(const std::string& target);
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