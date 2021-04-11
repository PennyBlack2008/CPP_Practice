#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T* Arr, int length, void (*f)(T const &ref))
{
	for (int i = 0; i < length; i++)
	{
		f(Arr[i]);
	}
}

template <typename T>
void display(T elm)
{
	std::cout << elm << std::endl;
}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//     o << rhs.get();
//     return o;
// }

// template< typename T >
// void print( T const & x )
// {
//     std::cout << x << std::endl;
//     return;
// }

#endif