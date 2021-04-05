/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:42:18 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 11:47:44 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(Character const &other);
	virtual ~Character();
	Character	&operator=(Character const &other);

	virtual std::string const	&getName() const;
	virtual void 				equip(AMateria *m);
	virtual void 				unequip(int idx);
	virtual void 				use(int idx, ICharacter &target);
private:
	Character();

	std::string	_name;
	int			_equipped;
	AMateria	*_inventory[4];  // 4개 AMateria 저장가능
};

#endif