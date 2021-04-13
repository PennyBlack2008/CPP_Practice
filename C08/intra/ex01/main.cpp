#include "Span.hpp"
#include <iostream>

#include <vector>

int main(void)
{
	/* 1. 정상작동 테스트 */
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "Provided test" << std::endl;
		Span sp = Span(5);
		sp.addNumber(0);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		/* 2의 결과값이 나와야함. */
	}

	/* 2. 정상작동 테스트 */
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << "Limit value test" << std::endl;
		Span sp = Span(2);
		sp.addNumber(std::numeric_limits<int>::min());
		sp.addNumber(std::numeric_limits<int>::max());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "unsigned int max : " << std::numeric_limits<unsigned int>::max() << std::endl;
	}

	/* 3. 너무 많이 넣으면 에러 테스트 */
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Max size test" << std::endl;
			Span sp = Span(5);
			for (int i = 0; i < 6; i++)
				sp.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}

	/* 4. 너무 적게 넣으면 에러 테스트 */
	{
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Min size test" << std::endl;
			Span sp = Span(5);
			sp.addNumber(5);
			/* 컨테이너에 하나만 있으면 에러난다. */
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}

	/* 5. 0을 10001 개 넣어서 테스트 이걸 왜 하지?..*/
	{
		/* 10001 개 짜리에 10001 개 넣는 거 성공 */
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Add number test" << std::endl;
			Span sp = Span(10001);
			std::vector<int> vec(10001, 0);
			sp.addNumber(vec.begin(), vec.end()); // iterator 를 사용한 addNumber
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		/* 10001 개 짜리에 10002 개 넣는 거 당연히 에러 */
		try
		{
			std::cout << std::string(60, '-') << std::endl;
			std::cout << "Add number exception test" << std::endl;
			Span sp = Span(10001);
			std::vector<int> vec(10002, 0);
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
			sp.addNumber(vec.begin(), vec.end()); // iterator 를 사용한 addNumber
			std::cout << "end : " << *(sp.GetList().end()) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	return (0);
}