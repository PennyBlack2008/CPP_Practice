#include "PhoneBook.hpp"

void	print(const char *s)
{
	std::cout<<"\n>>>>>>>>>>> "<<s<<" <<<<<<<<<<<\n";
}


int main(void)
{
	std::string line;
	PhoneBook pb;

	print("Phone Book");
	while (1)
	{
		std::cout<<"Select ADD, SEARCH, EXIT : ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(-1);
		if (line == "ADD")
			pb.AddContact();
		else if (line == "SEARCH")
			pb.SearchContact();
		else if (line == "EXIT")
		{
			print("end");
			return (0);
		}
		else
			print("wrong input");
	}
	return (-1);
}
