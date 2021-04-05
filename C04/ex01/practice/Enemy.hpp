/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:23:38 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:37:24 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class	Enemy
{
public:
	Enemy(int hp, const std::string& type);
	Enemy(const Enemy& other);
	virtual ~Enemy();
	
	Enemy&			operator=(const Enemy& other);
	
	const std::string&	getType(void) const;
	int					getHP() const;
	void				setType(const std::string& type);
	void				setHP(const int hp);
	virtual void		takeDamage(int);
private:
	Enemy(void);
	int					mHP;
	std::string			mType;
};

#endif