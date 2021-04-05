/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:26:40 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:27:58 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine& other);
	virtual ~TacticalMarine(void);

	TacticalMarine&		operator=(const TacticalMarine& other);

	ISpaceMarine*		clone(void) const;
	void				battleCry(void) const;
	void				rangedAttack(void) const;
	void				meleeAttack(void) const;
};

#endif