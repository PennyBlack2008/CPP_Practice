/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:00:59 by jikang            #+#    #+#             */
/*   Updated: 2021/03/20 20:20:22 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include "Contact.hpp"
# define SIZE 2

class	PhoneBook
{
	private:
		Contact	mContacts[2];
		int		mAmount;
	public:
		PhoneBook();
		virtual ~PhoneBook();
		void	ShowStartup(void);
		void	AddContact(void);
		void	SearchContact(void);
		void	ShowSearchHeader(void);
};

#endif