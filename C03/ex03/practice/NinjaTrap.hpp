/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:35:26 by jikang            #+#    #+#             */
/*   Updated: 2021/04/03 14:53:29 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class		NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(const std::string& name);
		NinjaTrap(const NinjaTrap& other);
		~NinjaTrap(void);
		NinjaTrap&			operator=(const NinjaTrap& other);
		
		void				ninjaShoebox(FragTrap &trap);
		void				ninjaShoebox(ScavTrap &trap);
		void				ninjaShoebox(ClapTrap &trap);
		void				ninjaShoebox(NinjaTrap &trap);
};

#endif