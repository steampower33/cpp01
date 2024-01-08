#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the String : \t" << &str << std::endl;
	std::cout << "The memory address of the StringPTR : \t" << stringPTR << std::endl;
	std::cout << "The memory address of the StringREF : \t" << &stringREF << std::endl;

	std::cout << "The value of the String : \t\t" << str << std::endl;
	std::cout << "The value pointed to by StringPTR : \t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by StringREF : \t" << stringREF << std::endl;

}