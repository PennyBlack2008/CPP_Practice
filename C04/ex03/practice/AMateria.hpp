/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:29:57 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:30:12 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria;
class ICharacter;

#include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(const std::string& type);
	AMateria(const AMateria& other);
	virtual ~AMateria(void);

	AMateria&			operator=(const AMateria& other);
		
	const std::string&	getType(void) const;
	unsigned int		getXP(void) const;
	void				setXP(const int xp);

	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharacter& target);

private:
	AMateria(void);

	const std::string	_type;
	unsigned int		_xp;
};

#endif