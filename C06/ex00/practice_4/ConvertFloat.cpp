#include "ConvertFloat.hpp"

ConvertFloat::ConvertFloat(void)
	: Convert()
{
}

ConvertFlaot::ConvertFloat(const std::string& str)
	: Convert(str)
{
	if (GetType() == CHAR)
	{
		try
		{
			mValue = static_cast<char>(std::stoi(str));
		}
		catch(const std::exception& e)
		{
			if (str.length() == 1)
				mValue = str.at(0);
		}
	}
}
