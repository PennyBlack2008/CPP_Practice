/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:24:20 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:24:21 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

/*
• getCount() returns the number of units currently in the squad.
• getUnit(N) returns a pointer to the Nth unit 
	(Of course, we start at 0. Null pointer in case of out-of-bounds index.)
• push(XXX) adds the XXX unit to the end of the squad. Returns the number of
	 units in the squad after the operation 
	 (Adding a null unit, or an unit already in the squad, 
	 make no sense at all, of course...)
*/

/*
	인터 페이스 : 소멸자와 순수 가상함수만 선언된 클래스
*/

class ISquad
{
public:
	virtual ~ISquad(void) {}

	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine*	getUnit(int index) const = 0;
	virtual int				push(ISpaceMarine* unit) = 0;
};

#endif