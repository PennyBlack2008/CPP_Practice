#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP

# include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void)
	: std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
	: std::stack<T>(other)
{
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
}

template<typename T>
MutantStack<T>&									MutantStack<T>::operator=(const MutantStack<T>& other)
{
	this->c = other.c;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator				MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator				MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::end(void) const
{
	return (this->c.end());
}

#endif