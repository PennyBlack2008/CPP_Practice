#include "Character.hpp"

Character::Character()
	: mCount(0)
	, mName("Default Character")
{
}

Character::Character(const std::string& name)
	: mCount(0)
	, mName(name);
{
}

// 동적할당이 아닌 배열로 선언했기 때문에 깊은 복사 처리 따로 없이
// 얕은 복사가 깊은 복사가 된다.
Character::Character(const Character& other)
{
	*this = other
}

Character&		Character::operator=(const Character& other)
{
	mName = other.mName;
	for (int i = 0; i < mCount; i++)
	{
		delete mInventory[i];
		mInventory[i] = NULL;
	}
	mCount = 0;
	for (int i = 0; i < other.mCount; i++)
	{
		equip(other.mInventory[i]->clone());
	}
	return (*this);
}

void			Character::equip(AMateria* m)
{
	if (mCount < 4 && m)
	{
		for (int i = 0; i < mCount; i++)
		{
			if (mInventory[i] == m)
			{
				return ;
			}
		}
		mInventory[mCount] = m;
		mCount++;
	}
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx < mCount && mInventory[idx])
	{
		if (idx == 3)
		{
			mInventory[idx] = NULL;
		}
		else
		{
			/* 빈공간 다시 앞으로 채워주기 */
			for (int i = idx; i < 3; i++)
			{
				mInventory[i] = mInventory[i + 1];
				mInventory[i + 1] = NULL;
			}
		}
		mCount--;
	}
}

const std::string&  Character::getName(void) const
{
	return (mName);
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < mCount && mInventory[idx])
	{
		mInventory[idx]->use(target);
	}
}
