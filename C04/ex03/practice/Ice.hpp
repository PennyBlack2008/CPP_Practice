/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:31:11 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:31:34 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	Ice(const Ice& other);
	virtual ~Ice(void);

	Ice&		operator=(const Ice& other);

	AMateria*	clone(void) const;
	void		use(ICharacter &target);
};

#endif