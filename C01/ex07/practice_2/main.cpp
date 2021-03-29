#include <iostream>
#include <fstream>
/*
npos 는 unsigned 형의 -1으로 최대로 표현할 수 있는 제일 큰 수

find메서드는 문자열 ans에서 c (xxx)가 있는지 없는지 검색하는 기능을 하는데
만약 ans에서 c를 찾는다면 해당 문자가 위치한 문자배열값 또는 문자열의 시작점이 위치한 배열값을
반환하고 찾지 못하면 string::npos값을 반환한다.
*/
static void		replaceLine(std::string& line, std::string s1, std::string s2)
{
	std::size_t start = 0;
	while (true)
	{
		std::size_t found = line.find(s1, start);
		if (found != std::string::npos)
		{
			line.replace(found, s1.length(), s2);
			start = found + s2.length();
		}
		else
			break ;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "invalid arguments\n";
	}
	else
	{
		std::string fileName(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		

		if (s1.empty() || s2.empty())
		{
			std::cout << "Empty string!\n";
			return (-1);
		}
		std::ifstream ifs(fileName, std::ifstream::in);
		if (ifs.is_open())
		{
			std::ofstream ofs(fileName + ".replace", std::ofstream::out | std::ofstream::trunc);
			if (ofs.is_open())
			{
				while (true)
				{
					std::string line;
					getline(ifs, line);
					replaceLine(line, s1, s2);
					ofs << line;
					if (!ifs.eof())
						ofs << '\n';
					else
						break ;
				}
			}
			else
				std::cout << "Open failed\n";
			ofs.close();
		}
		else
			std::cout << "Open failed.\n";
		ifs.close();
	}
	return (0);
}