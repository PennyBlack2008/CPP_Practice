#include <string>
#include <iostream>

struct	Data
{
	std::string s1;
	int			n;
	std::string s2;
};

void	*serialize(void)
{
	std::string s1 = "";
	std::string s2 = "";
	char	*ptr;
	char	alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int		integer;

	srand(clock());
	for (int i = 0; i < 8; i++)
	{
		s1 += alphanum[rand() % 35];
		s2 += alphanum[rand() % 35];
	}
	integer = rand();
	ptr = new char[sizeof(s1) + sizeof(integer) + sizeof(s2)];
	
	std::cout << "s1 : " << s1 << '\n';
	std::cout << "integer : " << integer << '\n';
	std::cout << "s2 : " << s2 << '\n';

	memcpy(ptr, &s1, 24);
	memcpy(ptr + 24, &integer, 4);
	memcpy(ptr + 28, &s2, 24);
	return (ptr);
}

Data	*deserialize(void *raw)
{
	Data* dd = new Data;
	
	dd->s1 = static_cast<char*>(raw);//24bytes
	dd->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 24);//4bytes
	dd->s2 = static_cast<char*>(raw) + 28;//24bytes
	return (dd);
}

int main(void)
{
	char *ptr = static_cast<char*>(serialize());
	Data *des = deserialize(ptr);

	std::cout << des->s1 << std::endl;
	std::cout << des->n << std::endl;
	std::cout << des->s2 << std::endl;

	delete des;
}
