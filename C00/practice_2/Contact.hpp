/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:02:21 by jikang            #+#    #+#             */
/*   Updated: 2021/03/20 20:45:37 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define DETAIL_NUM 5

class						Contact
{
	private:
		int					mIndex;
		static std::string	mFieldsName[DETAIL_NUM];
		std::string			mInfo[DETAIL_NUM];

		enum eField {
			FirstName = 0,
			LastName,
			NickName,
			Email,
			Phone
		};
	public:
		Contact(void);
		virtual				~Contact();
		bool				SetInfo(int index);
		void				DisplayHeader(void);
		void				Display(void);
};

#endif