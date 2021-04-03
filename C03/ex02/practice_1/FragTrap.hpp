/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:08:04 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:03:53 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"



class		FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other); /* 복사 생성자 */
		~FragTrap(void);

		FragTrap&				operator=(const FragTrap& other);
		void					vaulthunter_dot_exe(std::string const& target);
	private:
		static std::string mFunnyAttackList[5];
};

void		printWelcome(void);
#endif