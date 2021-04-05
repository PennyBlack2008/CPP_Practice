/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:22:08 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 10:27:52 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	인터 페이스 : 소멸자와 순수 가상함수만 선언된 클래스
	특징 : .cpp 파일이 없음. 아무것도 정의안해도됨. 대신 소멸자 {}를 헤더에 명시
*/

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}

	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif