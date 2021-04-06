/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:48:38 by jikang            #+#    #+#             */
/*   Updated: 2021/04/06 15:44:03 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class	Bureaucrat
{
	public:
		Bureaucrat(const std::string& name, const int& grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat& other);

		void				IncrementGrade(void);
		void				DecrementGrade(void);
		void				GradeTooHighException(void);
		void				GradeTooLowException(void);
		const std::string&	getName(void) const;
		const int&			getGrade(void) const;

		class InvalidGradeException : public std::exception
		{
			virtual const char* what(void) const throw();
		};
	private:
		Bureaucrat(void);
		std::string	mName;
		int			mGrade;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &other);

#endif