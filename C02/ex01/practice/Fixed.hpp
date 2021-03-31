#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class		Fixed
{
	private:
		int		mVal;
		static const int mBits = 8;
	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed& ref);
		~Fixed();
		Fixed& operator=(const Fixed& ref);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& ref);

#endif
