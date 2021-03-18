#include "PhoneBook.hpp"

void print(const char *s)
{
	std::cout<<"\n>>>>>>>>>>> "<<s<<" <<<<<<<<<<<<\n";
}

int main(void)
{
	std::string cmd;
	PhoneBook pb;

	while (1)
	{
		std::cout<<"select ADD, SERACH, EXIT : ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.AddContact();
		else if (cmd == "SEARCH")
			pb.SearchContact();
		else if (cmd == "EXIT")
		{
			print("end");
			return (0);
		}
		else
			print("wrong input");
	}
	return (-1);
}
