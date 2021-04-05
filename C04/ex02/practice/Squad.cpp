/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:31:01 by jikang            #+#    #+#             */
/*   Updated: 2021/04/05 13:52:45 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
	: mCount(0)
	, mUnits(NULL)
{
}

Squad::Squad(const Squad& other)
	: mCount(0)
	, mUnits(NULL)
{
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad(void)
{
	if (mUnits)
	{
		for (int i = 0; i < mCount; i++)
		{
			delete mUnits[i];
		}
		delete[] mUnits;
	}
}

Squad&			Squad::operator=(const Squad& other)
{
	// 이미 동적할당되어 존재한다면, 기존의 것을 지우고 시작. 
	// 이전에 제대로 작동했고 동적할당이 안되어있었다면 mCount 는 0이다.
	if (mUnits != NULL)
	{
		for (int i = 0; i < mCount; i++)
			delete mUnits[i];
		delete[] mUnits;
		mUnits = NULL;
	}
	this->mCount = 0;
	for (int i = 0; i < other.getCount(); i++)
		push(other.getUnit(i)->clone());
	return (*this);
}

int				Squad::getCount(void) const
{
	return (mCount);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (mCount > 0 && index >= 0 && index < mCount)
	{
		return (mUnits[index]);
	}
	else
	{
		return (NULL);
	}
}
/* 스택 */
int				Squad::push(ISpaceMarine* unit)
{
	if (unit)
	{
		/* 신병 중복 지원 금지 */
		for (int i = 0; i < mCount; i++)
		{
			if (mUnits[i] == unit)
			{
				return (mCount);
			}
		}
		ISpaceMarine **tmp = new ISpaceMarine*[mCount + 1];
		/* 원래 있던 mUnits 을 tmp 로 백업 */
		for (int i = 0; i < mCount; i++)
		{
			tmp[i] = mUnits[i];
		}
		/* 마지막에 신병을 넣고 tmp 포인터 배열로 완전히 대체 */
		tmp[mCount] = unit;
		if (mUnits != NULL)
		{
			delete[] mUnits;
			mUnits = NULL;
		}
		mUnits = tmp;
		mCount++;
	}
	return (mCount);
}