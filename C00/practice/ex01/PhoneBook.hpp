#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Info.hpp"
# include <iomanip>
# define SIZE 2

class	PhoneBook
{
	private:
		int		mNum;
		Info	mContact[SIZE];

	public:
		PhoneBook(void); // 클래스 생성자
		void	AddContact(void); // 정보 추가
		void	SearchContact(void); // 정보 검색
};

void	print(const char *s);

#endif
