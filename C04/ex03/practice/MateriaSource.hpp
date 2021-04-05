/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:35:45 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 12:35:59 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource  // IMateriaSource를 상속받음
{
private:
	int			_count;
	AMateria	*_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();
	MateriaSource& operator=(MateriaSource const &other);

	virtual void 		learnMateria(AMateria*);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif