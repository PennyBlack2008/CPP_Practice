/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:48:35 by jikang            #+#    #+#             */
/*   Updated: 2021/04/06 15:52:57 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: mName("This does not allowed")
	, mGrade(-1)
{
}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade)
	: mName(name)
	, mGrade(grade)
{
	if (mGrade < 1 || mGrade > 150)
	{
		throw Bureaucrat::InvalidGradeException();
	}
}

/* 여기서도 에러처리를 해주는 구나 */
Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat(void)
{
}

/* 아직 뭐가 뭔지 모르겠으니 남겨 두자 */
Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& other)
{
	mGrade = other.mGrade;
	return (*this);
}

/* 빼는 것이 올라가는 것 */
void				Bureaucrat::IncrementGrade(void)
{
	if (mGrade <= 1)
		throw mGrade;
	mGrade--;
}

/* 더하는 것이 내려가는 것 */
void				Bureaucrat::DecrementGrade(void)
{
	if (mGrade >= 150)
		throw mGrade;
	mGrade++;
}

void				Bureaucrat::GradeTooHighException(void)
{
	std::cout << "Grade is too high!" << std::endl;
}

void				Bureaucrat::GradeTooLowException(void)
{
	std::cout << "Grade is too low!" << std::endl;
}


const std::string&	Bureaucrat::getName(void) const
{
	return (mName);
}

const int&			Bureaucrat::getGrade(void) const
{
	return (mGrade);
}

const char*			Bureaucrat::InvalidGradeException::what(void) const throw()
{
	return ("Grade must be among 1 ~ 150");
}

std::ostream&		operator<<(std::ostream &os, const Bureaucrat &other)
{
	return (os << "Name : " << other.getName() << ", Grade : " << other.getGrade() << std::endl);
}