/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:54:53 by jikang            #+#    #+#             */
/*   Updated: 2021/04/04 11:20:53 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
public:
	Peon(void);
	Peon(const std::string& name);
	Peon(const Peon& other);
	virtual ~Peon();

	Peon&	operator=(const Peon& other);

private:
	void	getPolymorphed(void) const;
};

#endif