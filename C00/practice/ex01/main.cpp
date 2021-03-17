#include "phoneBook.hpp"

void	print(const char *s)
{
	std::cout<<"\n>>>>>>>> "<<s<<" <<<<<<<<\n\n";
}

int main(void)
{
	std::string cmd;
	phoneBook pb;

	while (1)
	{
		print("My Awesome PhoneBook");
		std::cout<<"select (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, cmd);

		if (std::cin.eof())
			return (-1);
		std::cout<<"---------------------------\n\n";
		if (cmd == "ADD")
			pb.addContact();
		else if (cmd == "SEARCH")
			pb.searchContact();
	}
	return (-1);
}
