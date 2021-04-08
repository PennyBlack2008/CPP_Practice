#include "Convert.hpp"

/*
문자를 받아 타입을 정확한 타입을 파악하고, 그 타입에 맞게 숫자를 저장하자.
*/

Convert::Convert(void)
	: mLiteral("")
	, mType("")
	, mNumChar(0)
	, mNumInt(0)
	, mNumFloat(0)
	, mNumDouble(0)
{
}

/* 여기서 계산을 실행해서 멤버에 값을 넣어주자 */
Convert::Convert(const std::string& literal)
	: mLiteral(literal)
	, mType("")
	, mNumChar(0)
	, mNumInt(0)
	, mNumFloat(0)
	, mNumDouble(0)
{
	
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert&			Convert::operator=(const Convert& other)
{
	mLiteral = other.mLiteral;
	mType = other.mType;
	mNumChar = other.mNumChar;
	mNumInt = other.mNumInt;
	mNumFloat = other.mNumFloat;
	mNumDouble = other.mNumDouble;
	return (*this);
}

const std::string&	Convert::GetType(void) const
{
	return (mType);
}

void				Convert::SetType(std::string& type)
{
	mType = type;
}

const std::string&	Convert::GetLiteral(void) const
{
	return (mLiteral);
}