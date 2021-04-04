/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 09:45:01 by jikang            #+#    #+#             */
/*   Updated: 2021/04/04 11:02:00 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class	Sorcerer
{
public:
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(const Sorcerer& other);
	~Sorcerer(void);

	Sorcerer&			operator=(const Sorcerer& other);
	const std::string&	GetName(void) const;
	const std::string&	GetTitle(void) const;
	void				polymorph(const Victim& victim) const;

private:
	Sorcerer(void);

	std::string			mName;
	std::string			mTitle;
};

std::ostream&			operator<<(std::ostream& os, const Sorcerer& sorcerer);
#endif