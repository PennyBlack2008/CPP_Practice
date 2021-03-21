/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:51:00 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 21:51:01 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
		std::string mPrivateInfo[11];
		static std::string mField[11];
	public:
		Contact(void);
		void	AddField(int i);
		void	ShowField(int i);
		void	ShowChoice(void);
		void	ShowContact(void);
		
};

#endif