#include "Convert.hpp"

/*
문자를 받아 타입을 정확한 타입을 파악하고, 그 타입에 맞게 숫자를 저장하자.
*/

Convert::Convert(void)
	: mLiteral("")
	, mType(IMPOSSIBLE)
{
}

/* 여기서 계산을 실행해서 멤버에 값을 넣어주자 */
Convert::Convert(const std::string& literal)
	: mLiteral(literal)
	, mType(IMPOSSIBLE)
{
	DetectType();
	std::cout << mType << std::endl;
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert::~Convert(void)
{
}

Convert&			Convert::operator=(const Convert& other)
{
	mLiteral = other.mLiteral;
	mType = other.mType;
	return (*this);
}

const int&	Convert::GetType(void) const
{
	return (mType);
}

// void				Convert::SetType(std::string& type)
// {
// 	mType = type;
// }

void				Convert::DetectType(void)
{
	std::size_t found;
	std::string str;

	// Char 이냐
	if (mLiteral.length() == 1)
	{
		mType = CHAR;
		return ;
	}

	/* 
	일단 . 이 있나 확인해보자
	if (.)
	{
		if (f 가 있냐 없냐)
		{}
		else
		{}
	}
	*/

	found = str.find_first_not_of("+-0123456789.f");
	if (found != std::string::npos)
	{
		mType = IMPOSSIBLE;
		return ;
	}
	if (isTwice(str, '+') || isTwice(str, '-') || isTwice(str, '.') || isTwice(str, 'f'))
	{
		mType = IMPOSSIBLE;
		return ;
	}

	// 점 여러개 있거나 f 가 여러개 있거나 를 막기
	// Float 이냐 , Double 이냐
	found = mLiteral.find(".");
	if (found != std::string::npos)
	{
		found = mLiteral.find("f");
		if (found != std::string::npos)
		{
			if (mLiteral.compare(mLiteral.size() - 1, 1, "f") == 0) // 나중에 여기에 f가 중복으로 들어갈 경우와 마지막에 안붙는 경우 막기
			{
				/* float 영역 */
				mType = FLOAT;
				return ;
			}
			else
			{
				mType = IMPOSSIBLE;
				return ;
			}
		}
		else
		{
			/* double 영역 */
			mType = DOUBLE;
			return ;
		}
	}
	/* int 영역 */
	mType = INT;
	return ;
}

const std::string&	Convert::GetLiteral(void) const
{
	return (mLiteral);
}

bool	Convert::isTwice(const std::string& str, const char needle) const
{
	std::size_t		found = str.find(needle);
	if (found != std::string::npos)
	{
		found = str.find(needle, found + 1);
		if (found == std::string::npos)
			return (false);
		else
			return (true);
	}
	else
		return (false);
}

const char* Convert::ImpossibleException::what(void) const throw()
{
	return ("impossible");
}