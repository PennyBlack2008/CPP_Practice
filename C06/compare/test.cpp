// comparing apples with apples
#include <iostream>
#include <string>

int main ()
{
  std::string str1 ("green apple");
  std::string str2 ("red apple");

    std::cout << str2.size() << std::endl;
    std::cout << str2.compare(str2.size()-5,5,"apple") << std::endl;
    std::cout << str2.compare(str2.size(),5,"apple") << std::endl;

  std::string str3 ("101010f");
    std::cout << str3.compare(str3.size() - 1,1,"f") << std::endl;
  return 0;
}