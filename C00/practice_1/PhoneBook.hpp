#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define SIZE 3

class			PhoneBook
{
	private:
		int		mNum;
		Info	mContact[SIZE];
	public:
		PhoneBook(void);
		void	AddContact(void);
};

void		print(const char *s);

#endif
