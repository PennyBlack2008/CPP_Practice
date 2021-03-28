#include <iostream>
#include <string>
#include <fstream>

int		main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::string::size_type pos;

	if (argc !=4)  // 인자로 파일이름, 문자열 두개가 들어오지 않으면
	{
		std::cout<<"Error : wrong argument\n";
		return (-1);
	}
	file = argv[1];  //파일 이름
	s1=argv[2];  // 첫번째 문자열
	s2=argv[3];  // 두번째 문자열
	ifs.open(file);  // 읽을 파일 열기
	file += ".replace";  // 파일이름 수정
	ofs.open(file);  // 출력할 파일 열기
	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout << "Error : wrong file name\n";
		return (-1);
	}
	while (getline(ifs, line))
	{
		pos = 0;
		while (true)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		ofs << line;
		if (!ifs.eof())
			ofs<<'\n';
	}
	ifs.close();
	ofs.close();
	return (0);
}
