#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char c;
	char *s;

	s = (char *)malloc(sizeof(char) * 3);
	s[0] = 'a'; s[1] = 0; s[2] = 0;
	//s += 'a'; 'a' == 97. s += 97; 는 뜻은 문자열에서 97번째의 문자 부터 출력하라는 뜻인데..
	printf("%s\n", s);
	std::string str;
	std::cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
	do {
		c = std::cin.get();
		//str += c;
		str.append(1u, c);
		if (c == '\n')
		{
			std::cout << str;
			str.clear();
		}
	} while (c != '.');
	return (0);
}
