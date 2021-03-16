#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "info.hpp"
# include <iomanip>
# define SIZE 8

class	phoneBook
{
	private:
		int		num;
		info	contact[SIZE];

	public:
		phoneBook(void); // 클래스 생성자
		void	addContact(void); // 정보 추가
		void	searchContact(void); // 정보 검색
};

void	print(const cahr *s);

#endif
