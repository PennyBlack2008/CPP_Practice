/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:29:11 by jikang            #+#    #+#             */
/*   Updated: 2021/03/21 19:11:01 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# define SIZE 8

class PhoneBook
{
	private:
		int		mNum;
		Contact	mPerson[SIZE];
	public:
		PhoneBook(void);
		void	AddPerson(void);
		void	ShowChoice(void);
};

#endif