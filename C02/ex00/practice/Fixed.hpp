#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &ref);
		Fixed& operator=(const Fixed &ref);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int			mVal;
		static const int bits = 8;
};

#endif
