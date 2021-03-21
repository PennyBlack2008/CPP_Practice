#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
	private:
		std::string mPrivateInfo[11];
		static std::string mField[11];
	public:
		Contact(void);
		void	AddField(int i);
		void	ShowField(int i);
		void	ShowChoice(void);
		void	ShowContact(void);
		
};

#endif