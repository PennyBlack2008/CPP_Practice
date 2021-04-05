/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:28:47 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:59:52 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator& other);
	virtual ~AssaultTerminator(void);

	AssaultTerminator&	operator=(const AssaultTerminator& other);

	ISpaceMarine*		clone(void) const;
	void				battleCry(void) const;
	void				rangedAttack(void) const;
	void				meleeAttack(void) const;
};

#endif