/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:57:05 by jikang            #+#    #+#             */
/*   Updated: 2021/03/26 22:32:23 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

/*
	Zombie 를 배열로 동적할당하기 때문에
	delete 를 delete[] 로 명시해줘야한다.
	나중에 디버깅하기 쉽도록
	mms 라는 문자를 변수 앞에 붙였다.
	Multiple Memory Allocations.
*/
class	ZombieHorde
{
	public:
		ZombieHorde(void);
		~ZombieHorde();
		void		announce(void);
		
	private:
		Zombie*		mmsZom;
		int			N;
}

#endif