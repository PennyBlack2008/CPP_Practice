/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:48:08 by jikang            #+#    #+#             */
/*   Updated: 2021/04/06 15:42:30 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	/* 갓 공무원이 된 150 급 sonA 의 진급 하락이 가능한가? */
	Bureaucrat sonA("SonA", 150);
	
	try
	{
		sonA.DecrementGrade();
	}
	catch(int expn)
	{
		if (expn >= 150)
			sonA.GradeTooHighException();
		else
			sonA.GradeTooLowException();
	}

	/* 영국 수상 테레사 메이 이미 1급 공무원이지만 왕의 자리를 노리는 게 가능한가? */
	Bureaucrat primeMinister("Theresa May", 1);

	try
	{
		sonA.IncrementGrade();
	}
	catch(int expn)
	{
		if (expn >= 150)
			sonA.GradeTooHighException();
		else
			sonA.GradeTooLowException();
	}

	return (0);
}