/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:11:02 by jikang            #+#    #+#             */
/*   Updated: 2021/03/28 19:49:22 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.cplusplus.com/reference/fstream/ifstream/open/
https://www.cplusplus.com/doc/tutorial/files/
http://www.cplusplus.com/reference/fstream/ifstream/is_open/
*/

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

void PrintError(int i)
{
	if (i == 0)
		std::cout << "Wrong input!" << std::endl;
	else if (i == 1)
		std::cout << "Something wrong in your file!" << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 3)
		PrintError(0);
	ifstream ifFile;
	ofstream ofFile;
	string newFile;
	string line;

	newFile = argv[1];
	ifFile.open(newFile);
	newFile += "replace";
	ofFile.open(newFile, std::ofstream::out | std::ofstream::trunc);

	if (!ifFile.is_open() || !ofFile.is_open())
	{
		PrintError(1);
		return (-1);
	}
	while (getline(ifFile, line))
	{
		
	}
	ifFile.close();
	ofFile.close();

	return (0);
}