#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# define SIZE 3

class			PhoneBook
{
	private:
		int		mNum;
		Contact	mContact[SIZE];
	public:
		PhoneBook(void);
		void	AddContact(void);
		void	SearchContact(void);
};

void		print(const char *s);

#endif
