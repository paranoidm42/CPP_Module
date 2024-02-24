#include <iostream>

int main()
{
	std::string itbrain = "HI THIS IS BRAIN";
	std::string *stringPTR = &itbrain;
	std::string &stringREF = itbrain;

	std::cout << &itbrain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << itbrain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}
