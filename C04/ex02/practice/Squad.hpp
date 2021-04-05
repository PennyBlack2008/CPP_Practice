/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:30:23 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:51:23 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad(void);
	Squad(const Squad& other);
	virtual ~Squad(void);

	Squad&			operator=(const Squad& other);

	int				getCount(void) const;
	ISpaceMarine*	getUnit(int index) const;

	int				push(ISpaceMarine* unit);

private:
	int				mCount; // Squad 인원 check
	ISpaceMarine**	mUnits; // 
};

#endif