#include <iostream>
#include <list>
#include "mutantstack.hpp"

int main(void)
{
	/* mstack test */
	std::cout << std::string(60, '-') << std::endl;
	std::cout << "stack test" << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int>	s(mstack);
	}


	/* char 형일 때 테스트 */
	std::cout << std::string(60, '-') << std::endl;
	std::cout << "char test" << std::endl;
	std::cout << std::string(60, '-') << std::endl;
	{
		MutantStack<char>	sample;

		for(char i = 'a'; i <= 'z'; i++)
			sample.push(i);
		for(MutantStack<char>::iterator it = sample.begin(); it != sample.end(); it++)
			std::cout << *it << ' ';
	}

	return (0);
}