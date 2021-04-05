/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 09:15:59 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 09:16:00 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle& other);
	virtual ~PlasmaRifle(void);

	PlasmaRifle&	operator=(const PlasmaRifle& other);

	void			attack(void) const;
};

#endif