#include <iostream>
#include <string.h>

using namespace std;

class UserInfo
{
	char* name;
	char* phone;
	public:
		UserInfo(char*, char*);
		~UserInfo();
		void viewInfo() const;
};

UserInfo::UserInfo(char* name, char* phone)
{
	this
}
